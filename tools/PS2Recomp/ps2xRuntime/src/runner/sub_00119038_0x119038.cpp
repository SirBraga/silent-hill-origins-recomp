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

// Function: sub_00119038
// Address: 0x119038 - 0x1190b0
void sub_00119038_0x119038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00119038_0x119038");
#endif

    switch (ctx->pc) {
        case 0x119060u: goto label_119060;
        case 0x119084u: goto label_119084;
        case 0x11909cu: goto label_11909c;
        default: break;
    }

    ctx->pc = 0x119038u;

    // 0x119038: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x119038u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11903c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x11903cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x119040: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x119040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x119044: 0x14a20015  bne         $a1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x119044u;
    {
        const bool branch_taken_0x119044 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x119048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119044u;
        // 0x119048: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119044) {
            ctx->pc = 0x11909Cu;
            goto label_11909c;
        }
    }
    ctx->pc = 0x11904Cu;
    // 0x11904c: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x11904Cu;
    {
        const bool branch_taken_0x11904c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x119050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11904Cu;
        // 0x119050: 0x3c100069  lui         $s0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11904c) {
            ctx->pc = 0x11908Cu;
            goto label_11908c;
        }
    }
    ctx->pc = 0x119054u;
    // 0x119054: 0x2610ade8  addiu       $s0, $s0, -0x5218
    ctx->pc = 0x119054u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294946280));
    // 0x119058: 0xc07f26a  jal         func_1FC9A8
    ctx->pc = 0x119058u;
    SET_GPR_U32(ctx, 31, 0x119060u);
    ctx->pc = 0x11905Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119058u;
    // 0x11905c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC9A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC9A8u, 0x119058u, 0x119060u)) {
        return;
    }
    ctx->pc = 0x119060u;
label_119060:
    // 0x119060: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x119060u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x119064: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x119064u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x119068: 0x3c060012  lui         $a2, 0x12
    ctx->pc = 0x119068u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)18 << 16));
    // 0x11906c: 0xac624528  sw          $v0, 0x4528($v1)
    ctx->pc = 0x11906cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B4528u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B4528u, _value); } while (0);
    // 0x119070: 0x24844530  addiu       $a0, $a0, 0x4530
    ctx->pc = 0x119070u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17712));
    // 0x119074: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x119074u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119078: 0x24c690e0  addiu       $a2, $a2, -0x6F20
    ctx->pc = 0x119078u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294938848));
    // 0x11907c: 0xc07f86a  jal         func_1FE1A8
    ctx->pc = 0x11907Cu;
    SET_GPR_U32(ctx, 31, 0x119084u);
    ctx->pc = 0x119080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11907Cu;
    // 0x119080: 0x240702c0  addiu       $a3, $zero, 0x2C0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE1A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE1A8u, 0x11907Cu, 0x119084u)) {
        return;
    }
    ctx->pc = 0x119084u;
label_119084:
    // 0x119084: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x119084u;
    {
        const bool branch_taken_0x119084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119084u;
        // 0x119088: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119084) {
            ctx->pc = 0x1190A0u;
            goto label_1190a0;
        }
    }
    ctx->pc = 0x11908Cu;
label_11908c:
    // 0x11908c: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x11908cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x119090: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x119090u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x119094: 0xc07f5cc  jal         func_1FD730
    ctx->pc = 0x119094u;
    SET_GPR_U32(ctx, 31, 0x11909Cu);
    ctx->pc = 0x119098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119094u;
    // 0x119098: 0x24844530  addiu       $a0, $a0, 0x4530 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17712));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD730u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FD730u, 0x119094u, 0x11909Cu)) {
        return;
    }
    ctx->pc = 0x11909Cu;
label_11909c:
    // 0x11909c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x11909cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1190a0:
    // 0x1190a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1190a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1190a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1190A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1190A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1190A4u;
        // 0x1190a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1190A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1190ACu;
    // 0x1190ac: 0x0  nop
    ctx->pc = 0x1190acu;
    // NOP
    ctx->pc = 0x1190b0u;
}
