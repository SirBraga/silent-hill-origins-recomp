#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00148210
// Address: 0x148210 - 0x1482d8
void sub_00148210_0x148210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00148210_0x148210");
#endif

    switch (ctx->pc) {
        case 0x148224u: goto label_148224;
        case 0x14825cu: goto label_14825c;
        case 0x148264u: goto label_148264;
        case 0x14826cu: goto label_14826c;
        case 0x148274u: goto label_148274;
        case 0x14827cu: goto label_14827c;
        case 0x148284u: goto label_148284;
        case 0x14828cu: goto label_14828c;
        case 0x148294u: goto label_148294;
        default: break;
    }

    ctx->pc = 0x148210u;

    // 0x148210: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x148210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x148214: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x148214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x148218: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x148218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14821c: 0xc051e58  jal         func_147960
    ctx->pc = 0x14821Cu;
    SET_GPR_U32(ctx, 31, 0x148224u);
    ctx->pc = 0x148220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14821Cu;
    // 0x148220: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147960u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x147960u, 0x14821Cu, 0x148224u)) {
        return;
    }
    ctx->pc = 0x148224u;
label_148224:
    // 0x148224: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x148224u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x148228: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x148228u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x14822c: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x14822cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x148230: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x148230u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x148234: 0x24631508  addiu       $v1, $v1, 0x1508
    ctx->pc = 0x148234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5384));
    // 0x148238: 0x24a513a8  addiu       $a1, $a1, 0x13A8
    ctx->pc = 0x148238u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5032));
    // 0x14823c: 0x24c61528  addiu       $a2, $a2, 0x1528
    ctx->pc = 0x14823cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5416));
    // 0x148240: 0x244213e8  addiu       $v0, $v0, 0x13E8
    ctx->pc = 0x148240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5096));
    // 0x148244: 0xae03003c  sw          $v1, 0x3C($s0)
    ctx->pc = 0x148244u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
    // 0x148248: 0x260400e0  addiu       $a0, $s0, 0xE0
    ctx->pc = 0x148248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x14824c: 0xae050084  sw          $a1, 0x84($s0)
    ctx->pc = 0x14824cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 5));
    // 0x148250: 0xae060034  sw          $a2, 0x34($s0)
    ctx->pc = 0x148250u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 6));
    // 0x148254: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x148254u;
    SET_GPR_U32(ctx, 31, 0x14825Cu);
    ctx->pc = 0x148258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148254u;
    // 0x148258: 0xae020048  sw          $v0, 0x48($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x148254u, 0x14825Cu)) {
        return;
    }
    ctx->pc = 0x14825Cu;
label_14825c:
    // 0x14825c: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x14825Cu;
    SET_GPR_U32(ctx, 31, 0x148264u);
    ctx->pc = 0x148260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14825Cu;
    // 0x148260: 0x260400e8  addiu       $a0, $s0, 0xE8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x14825Cu, 0x148264u)) {
        return;
    }
    ctx->pc = 0x148264u;
label_148264:
    // 0x148264: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x148264u;
    SET_GPR_U32(ctx, 31, 0x14826Cu);
    ctx->pc = 0x148268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148264u;
    // 0x148268: 0x260400f0  addiu       $a0, $s0, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x148264u, 0x14826Cu)) {
        return;
    }
    ctx->pc = 0x14826Cu;
label_14826c:
    // 0x14826c: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x14826Cu;
    SET_GPR_U32(ctx, 31, 0x148274u);
    ctx->pc = 0x148270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14826Cu;
    // 0x148270: 0x260400f8  addiu       $a0, $s0, 0xF8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x14826Cu, 0x148274u)) {
        return;
    }
    ctx->pc = 0x148274u;
label_148274:
    // 0x148274: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x148274u;
    SET_GPR_U32(ctx, 31, 0x14827Cu);
    ctx->pc = 0x148278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148274u;
    // 0x148278: 0x26040100  addiu       $a0, $s0, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x148274u, 0x14827Cu)) {
        return;
    }
    ctx->pc = 0x14827Cu;
label_14827c:
    // 0x14827c: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x14827Cu;
    SET_GPR_U32(ctx, 31, 0x148284u);
    ctx->pc = 0x148280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14827Cu;
    // 0x148280: 0x26040108  addiu       $a0, $s0, 0x108 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x14827Cu, 0x148284u)) {
        return;
    }
    ctx->pc = 0x148284u;
label_148284:
    // 0x148284: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x148284u;
    SET_GPR_U32(ctx, 31, 0x14828Cu);
    ctx->pc = 0x148288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148284u;
    // 0x148288: 0x26040110  addiu       $a0, $s0, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x148284u, 0x14828Cu)) {
        return;
    }
    ctx->pc = 0x14828Cu;
label_14828c:
    // 0x14828c: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x14828Cu;
    SET_GPR_U32(ctx, 31, 0x148294u);
    ctx->pc = 0x148290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14828Cu;
    // 0x148290: 0x26040118  addiu       $a0, $s0, 0x118 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x14828Cu, 0x148294u)) {
        return;
    }
    ctx->pc = 0x148294u;
label_148294:
    // 0x148294: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x148294u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x148298: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x148298u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14829c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x14829cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1482a0: 0xae000120  sw          $zero, 0x120($s0)
    ctx->pc = 0x1482a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 0));
    // 0x1482a4: 0xe6000138  swc1        $f0, 0x138($s0)
    ctx->pc = 0x1482a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 312), bits); }
    // 0x1482a8: 0xae000124  sw          $zero, 0x124($s0)
    ctx->pc = 0x1482a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 0));
    // 0x1482ac: 0xae000128  sw          $zero, 0x128($s0)
    ctx->pc = 0x1482acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 0));
    // 0x1482b0: 0xae00012c  sw          $zero, 0x12C($s0)
    ctx->pc = 0x1482b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 0));
    // 0x1482b4: 0xae000130  sw          $zero, 0x130($s0)
    ctx->pc = 0x1482b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 304), GPR_U32(ctx, 0));
    // 0x1482b8: 0xae000134  sw          $zero, 0x134($s0)
    ctx->pc = 0x1482b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 308), GPR_U32(ctx, 0));
    // 0x1482bc: 0xae00013c  sw          $zero, 0x13C($s0)
    ctx->pc = 0x1482bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 316), GPR_U32(ctx, 0));
    // 0x1482c0: 0xae000140  sw          $zero, 0x140($s0)
    ctx->pc = 0x1482c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 320), GPR_U32(ctx, 0));
    // 0x1482c4: 0xae000144  sw          $zero, 0x144($s0)
    ctx->pc = 0x1482c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 324), GPR_U32(ctx, 0));
    // 0x1482c8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1482c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1482cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1482ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1482d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1482D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1482D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1482D0u;
        // 0x1482d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1482D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1482D8u;
}
