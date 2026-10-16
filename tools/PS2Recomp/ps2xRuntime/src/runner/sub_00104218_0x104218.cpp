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

// Function: sub_00104218
// Address: 0x104218 - 0x1042e0
void sub_00104218_0x104218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00104218_0x104218");
#endif

    switch (ctx->pc) {
        case 0x10422cu: goto label_10422c;
        case 0x104264u: goto label_104264;
        case 0x10426cu: goto label_10426c;
        case 0x104274u: goto label_104274;
        case 0x10427cu: goto label_10427c;
        case 0x1042a4u: goto label_1042a4;
        case 0x1042acu: goto label_1042ac;
        default: break;
    }

    ctx->pc = 0x104218u;

    // 0x104218: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x104218u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10421c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x10421cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x104220: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x104220u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x104224: 0xc04edaa  jal         func_13B6A8
    ctx->pc = 0x104224u;
    SET_GPR_U32(ctx, 31, 0x10422Cu);
    ctx->pc = 0x104228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104224u;
    // 0x104228: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13B6A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13B6A8u, 0x104224u, 0x10422Cu)) {
        return;
    }
    ctx->pc = 0x10422Cu;
label_10422c:
    // 0x10422c: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x10422cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x104230: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x104230u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x104234: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x104234u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x104238: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x104238u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x10423c: 0x24a595d8  addiu       $a1, $a1, -0x6A28
    ctx->pc = 0x10423cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940120));
    // 0x104240: 0x24c69758  addiu       $a2, $a2, -0x68A8
    ctx->pc = 0x104240u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294940504));
    // 0x104244: 0x24639738  addiu       $v1, $v1, -0x68C8
    ctx->pc = 0x104244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940472));
    // 0x104248: 0x24429618  addiu       $v0, $v0, -0x69E8
    ctx->pc = 0x104248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940184));
    // 0x10424c: 0xae050084  sw          $a1, 0x84($s0)
    ctx->pc = 0x10424cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 5));
    // 0x104250: 0x260400dc  addiu       $a0, $s0, 0xDC
    ctx->pc = 0x104250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 220));
    // 0x104254: 0xae060034  sw          $a2, 0x34($s0)
    ctx->pc = 0x104254u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 6));
    // 0x104258: 0xae03003c  sw          $v1, 0x3C($s0)
    ctx->pc = 0x104258u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
    // 0x10425c: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x10425Cu;
    SET_GPR_U32(ctx, 31, 0x104264u);
    ctx->pc = 0x104260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10425Cu;
    // 0x104260: 0xae020048  sw          $v0, 0x48($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x10425Cu, 0x104264u)) {
        return;
    }
    ctx->pc = 0x104264u;
label_104264:
    // 0x104264: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x104264u;
    SET_GPR_U32(ctx, 31, 0x10426Cu);
    ctx->pc = 0x104268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104264u;
    // 0x104268: 0x260400e4  addiu       $a0, $s0, 0xE4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 228));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x104264u, 0x10426Cu)) {
        return;
    }
    ctx->pc = 0x10426Cu;
label_10426c:
    // 0x10426c: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x10426Cu;
    SET_GPR_U32(ctx, 31, 0x104274u);
    ctx->pc = 0x104270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10426Cu;
    // 0x104270: 0x260400ec  addiu       $a0, $s0, 0xEC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 236));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x10426Cu, 0x104274u)) {
        return;
    }
    ctx->pc = 0x104274u;
label_104274:
    // 0x104274: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x104274u;
    SET_GPR_U32(ctx, 31, 0x10427Cu);
    ctx->pc = 0x104278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104274u;
    // 0x104278: 0x260400f4  addiu       $a0, $s0, 0xF4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 244));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x104274u, 0x10427Cu)) {
        return;
    }
    ctx->pc = 0x10427Cu;
label_10427c:
    // 0x10427c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x10427cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x104280: 0xae0000fc  sw          $zero, 0xFC($s0)
    ctx->pc = 0x104280u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 252), GPR_U32(ctx, 0));
    // 0x104284: 0xae000100  sw          $zero, 0x100($s0)
    ctx->pc = 0x104284u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 0));
    // 0x104288: 0x2604004c  addiu       $a0, $s0, 0x4C
    ctx->pc = 0x104288u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 76));
    // 0x10428c: 0xae000110  sw          $zero, 0x110($s0)
    ctx->pc = 0x10428cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 0));
    // 0x104290: 0xae000114  sw          $zero, 0x114($s0)
    ctx->pc = 0x104290u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 0));
    // 0x104294: 0xae03010c  sw          $v1, 0x10C($s0)
    ctx->pc = 0x104294u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 3));
    // 0x104298: 0xae030104  sw          $v1, 0x104($s0)
    ctx->pc = 0x104298u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 260), GPR_U32(ctx, 3));
    // 0x10429c: 0xc041ed8  jal         func_107B60
    ctx->pc = 0x10429Cu;
    SET_GPR_U32(ctx, 31, 0x1042A4u);
    ctx->pc = 0x1042A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10429Cu;
    // 0x1042a0: 0xae030108  sw          $v1, 0x108($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107B60u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x107B60u, 0x10429Cu, 0x1042A4u)) {
        return;
    }
    ctx->pc = 0x1042A4u;
label_1042a4:
    // 0x1042a4: 0xc0420a6  jal         func_108298
    ctx->pc = 0x1042A4u;
    SET_GPR_U32(ctx, 31, 0x1042ACu);
    ctx->pc = 0x1042A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1042A4u;
    // 0x1042a8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108298u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x108298u, 0x1042A4u, 0x1042ACu)) {
        return;
    }
    ctx->pc = 0x1042ACu;
label_1042ac:
    // 0x1042ac: 0xae0200d8  sw          $v0, 0xD8($s0)
    ctx->pc = 0x1042acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 2));
    // 0x1042b0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1042b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1042b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1042b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1042b8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1042b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1042bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1042BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1042C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1042BCu;
        // 0x1042c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1042BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1042C4u;
    // 0x1042c4: 0x0  nop
    ctx->pc = 0x1042c4u;
    // NOP
    // 0x1042c8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1042c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1042cc: 0x0  nop
    ctx->pc = 0x1042ccu;
    // NOP
    // 0x1042d0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1042d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1042d4: 0x0  nop
    ctx->pc = 0x1042d4u;
    // NOP
    // 0x1042d8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1042d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1042dc: 0x0  nop
    ctx->pc = 0x1042dcu;
    // NOP
    ctx->pc = 0x1042e0u;
}
