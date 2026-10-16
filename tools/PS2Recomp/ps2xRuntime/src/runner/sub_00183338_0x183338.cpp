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

// Function: sub_00183338
// Address: 0x183338 - 0x1833b0
void sub_00183338_0x183338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00183338_0x183338");
#endif

    switch (ctx->pc) {
        case 0x183360u: goto label_183360;
        case 0x183384u: goto label_183384;
        case 0x18339cu: goto label_18339c;
        default: break;
    }

    ctx->pc = 0x183338u;

    // 0x183338: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x183338u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18333c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x18333cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x183340: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x183340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x183344: 0x14a20015  bne         $a1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x183344u;
    {
        const bool branch_taken_0x183344 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x183348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183344u;
        // 0x183348: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183344) {
            ctx->pc = 0x18339Cu;
            goto label_18339c;
        }
    }
    ctx->pc = 0x18334Cu;
    // 0x18334c: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x18334Cu;
    {
        const bool branch_taken_0x18334c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x183350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18334Cu;
        // 0x183350: 0x3c100069  lui         $s0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18334c) {
            ctx->pc = 0x18338Cu;
            goto label_18338c;
        }
    }
    ctx->pc = 0x183354u;
    // 0x183354: 0x26107f10  addiu       $s0, $s0, 0x7F10
    ctx->pc = 0x183354u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32528));
    // 0x183358: 0xc07f26a  jal         func_1FC9A8
    ctx->pc = 0x183358u;
    SET_GPR_U32(ctx, 31, 0x183360u);
    ctx->pc = 0x18335Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183358u;
    // 0x18335c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC9A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC9A8u, 0x183358u, 0x183360u)) {
        return;
    }
    ctx->pc = 0x183360u;
label_183360:
    // 0x183360: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x183360u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x183364: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x183364u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x183368: 0x3c060018  lui         $a2, 0x18
    ctx->pc = 0x183368u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)24 << 16));
    // 0x18336c: 0xac623bf8  sw          $v0, 0x3BF8($v1)
    ctx->pc = 0x18336cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6C3BF8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6C3BF8u, _value); } while (0);
    // 0x183370: 0x24843c00  addiu       $a0, $a0, 0x3C00
    ctx->pc = 0x183370u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15360));
    // 0x183374: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x183374u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183378: 0x24c633b0  addiu       $a2, $a2, 0x33B0
    ctx->pc = 0x183378u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 13232));
    // 0x18337c: 0xc07f86a  jal         func_1FE1A8
    ctx->pc = 0x18337Cu;
    SET_GPR_U32(ctx, 31, 0x183384u);
    ctx->pc = 0x183380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18337Cu;
    // 0x183380: 0x24070058  addiu       $a3, $zero, 0x58 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE1A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE1A8u, 0x18337Cu, 0x183384u)) {
        return;
    }
    ctx->pc = 0x183384u;
label_183384:
    // 0x183384: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x183384u;
    {
        const bool branch_taken_0x183384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x183388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183384u;
        // 0x183388: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183384) {
            ctx->pc = 0x1833A0u;
            goto label_1833a0;
        }
    }
    ctx->pc = 0x18338Cu;
label_18338c:
    // 0x18338c: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x18338cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x183390: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x183390u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x183394: 0xc07f5cc  jal         func_1FD730
    ctx->pc = 0x183394u;
    SET_GPR_U32(ctx, 31, 0x18339Cu);
    ctx->pc = 0x183398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183394u;
    // 0x183398: 0x24843c00  addiu       $a0, $a0, 0x3C00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD730u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FD730u, 0x183394u, 0x18339Cu)) {
        return;
    }
    ctx->pc = 0x18339Cu;
label_18339c:
    // 0x18339c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x18339cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1833a0:
    // 0x1833a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1833a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1833a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1833A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1833A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1833A4u;
        // 0x1833a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1833A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1833ACu;
    // 0x1833ac: 0x0  nop
    ctx->pc = 0x1833acu;
    // NOP
    ctx->pc = 0x1833b0u;
}
