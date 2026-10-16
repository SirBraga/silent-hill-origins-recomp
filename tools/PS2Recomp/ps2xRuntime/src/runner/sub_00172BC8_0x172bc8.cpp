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

// Function: sub_00172BC8
// Address: 0x172bc8 - 0x172c40
void sub_00172BC8_0x172bc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00172BC8_0x172bc8");
#endif

    switch (ctx->pc) {
        case 0x172bf0u: goto label_172bf0;
        case 0x172c14u: goto label_172c14;
        case 0x172c2cu: goto label_172c2c;
        default: break;
    }

    ctx->pc = 0x172bc8u;

    // 0x172bc8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x172bc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x172bcc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x172bccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x172bd0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x172bd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x172bd4: 0x14a20015  bne         $a1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x172BD4u;
    {
        const bool branch_taken_0x172bd4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x172BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172BD4u;
        // 0x172bd8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172bd4) {
            ctx->pc = 0x172C2Cu;
            goto label_172c2c;
        }
    }
    ctx->pc = 0x172BDCu;
    // 0x172bdc: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x172BDCu;
    {
        const bool branch_taken_0x172bdc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x172BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172BDCu;
        // 0x172be0: 0x3c100069  lui         $s0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172bdc) {
            ctx->pc = 0x172C1Cu;
            goto label_172c1c;
        }
    }
    ctx->pc = 0x172BE4u;
    // 0x172be4: 0x261059f8  addiu       $s0, $s0, 0x59F8
    ctx->pc = 0x172be4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 23032));
    // 0x172be8: 0xc07f26a  jal         func_1FC9A8
    ctx->pc = 0x172BE8u;
    SET_GPR_U32(ctx, 31, 0x172BF0u);
    ctx->pc = 0x172BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172BE8u;
    // 0x172bec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC9A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC9A8u, 0x172BE8u, 0x172BF0u)) {
        return;
    }
    ctx->pc = 0x172BF0u;
label_172bf0:
    // 0x172bf0: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x172bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x172bf4: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x172bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x172bf8: 0x3c060017  lui         $a2, 0x17
    ctx->pc = 0x172bf8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)23 << 16));
    // 0x172bfc: 0xac62f790  sw          $v0, -0x870($v1)
    ctx->pc = 0x172bfcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6BF790u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BF790u, _value); } while (0);
    // 0x172c00: 0x2484f798  addiu       $a0, $a0, -0x868
    ctx->pc = 0x172c00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965144));
    // 0x172c04: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x172c04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172c08: 0x24c62c40  addiu       $a2, $a2, 0x2C40
    ctx->pc = 0x172c08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 11328));
    // 0x172c0c: 0xc07f86a  jal         func_1FE1A8
    ctx->pc = 0x172C0Cu;
    SET_GPR_U32(ctx, 31, 0x172C14u);
    ctx->pc = 0x172C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172C0Cu;
    // 0x172c10: 0x240700a8  addiu       $a3, $zero, 0xA8 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE1A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE1A8u, 0x172C0Cu, 0x172C14u)) {
        return;
    }
    ctx->pc = 0x172C14u;
label_172c14:
    // 0x172c14: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x172C14u;
    {
        const bool branch_taken_0x172c14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x172C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172C14u;
        // 0x172c18: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172c14) {
            ctx->pc = 0x172C30u;
            goto label_172c30;
        }
    }
    ctx->pc = 0x172C1Cu;
label_172c1c:
    // 0x172c1c: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x172c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x172c20: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x172c20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x172c24: 0xc07f5cc  jal         func_1FD730
    ctx->pc = 0x172C24u;
    SET_GPR_U32(ctx, 31, 0x172C2Cu);
    ctx->pc = 0x172C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172C24u;
    // 0x172c28: 0x2484f798  addiu       $a0, $a0, -0x868 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD730u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FD730u, 0x172C24u, 0x172C2Cu)) {
        return;
    }
    ctx->pc = 0x172C2Cu;
label_172c2c:
    // 0x172c2c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x172c2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_172c30:
    // 0x172c30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x172c30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x172c34: 0x3e00008  jr          $ra
    ctx->pc = 0x172C34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x172C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172C34u;
        // 0x172c38: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x172C34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x172C3Cu;
    // 0x172c3c: 0x0  nop
    ctx->pc = 0x172c3cu;
    // NOP
    ctx->pc = 0x172c40u;
}
