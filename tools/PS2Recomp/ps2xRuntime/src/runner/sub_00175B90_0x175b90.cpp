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

// Function: sub_00175B90
// Address: 0x175b90 - 0x175c08
void sub_00175B90_0x175b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00175B90_0x175b90");
#endif

    switch (ctx->pc) {
        case 0x175bb8u: goto label_175bb8;
        case 0x175bdcu: goto label_175bdc;
        case 0x175bf4u: goto label_175bf4;
        default: break;
    }

    ctx->pc = 0x175b90u;

    // 0x175b90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x175b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x175b94: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x175b94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x175b98: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x175b98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x175b9c: 0x14a20015  bne         $a1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x175B9Cu;
    {
        const bool branch_taken_0x175b9c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x175BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175B9Cu;
        // 0x175ba0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175b9c) {
            ctx->pc = 0x175BF4u;
            goto label_175bf4;
        }
    }
    ctx->pc = 0x175BA4u;
    // 0x175ba4: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x175BA4u;
    {
        const bool branch_taken_0x175ba4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x175BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175BA4u;
        // 0x175ba8: 0x3c100069  lui         $s0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175ba4) {
            ctx->pc = 0x175BE4u;
            goto label_175be4;
        }
    }
    ctx->pc = 0x175BACu;
    // 0x175bac: 0x261062a0  addiu       $s0, $s0, 0x62A0
    ctx->pc = 0x175bacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 25248));
    // 0x175bb0: 0xc07f26a  jal         func_1FC9A8
    ctx->pc = 0x175BB0u;
    SET_GPR_U32(ctx, 31, 0x175BB8u);
    ctx->pc = 0x175BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175BB0u;
    // 0x175bb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC9A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC9A8u, 0x175BB0u, 0x175BB8u)) {
        return;
    }
    ctx->pc = 0x175BB8u;
label_175bb8:
    // 0x175bb8: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x175bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x175bbc: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x175bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x175bc0: 0x3c060017  lui         $a2, 0x17
    ctx->pc = 0x175bc0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)23 << 16));
    // 0x175bc4: 0xac62f820  sw          $v0, -0x7E0($v1)
    ctx->pc = 0x175bc4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6BF820u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BF820u, _value); } while (0);
    // 0x175bc8: 0x2484f828  addiu       $a0, $a0, -0x7D8
    ctx->pc = 0x175bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965288));
    // 0x175bcc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x175bccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175bd0: 0x24c65c08  addiu       $a2, $a2, 0x5C08
    ctx->pc = 0x175bd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 23560));
    // 0x175bd4: 0xc07f86a  jal         func_1FE1A8
    ctx->pc = 0x175BD4u;
    SET_GPR_U32(ctx, 31, 0x175BDCu);
    ctx->pc = 0x175BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175BD4u;
    // 0x175bd8: 0x24070070  addiu       $a3, $zero, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE1A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE1A8u, 0x175BD4u, 0x175BDCu)) {
        return;
    }
    ctx->pc = 0x175BDCu;
label_175bdc:
    // 0x175bdc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x175BDCu;
    {
        const bool branch_taken_0x175bdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x175BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175BDCu;
        // 0x175be0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175bdc) {
            ctx->pc = 0x175BF8u;
            goto label_175bf8;
        }
    }
    ctx->pc = 0x175BE4u;
label_175be4:
    // 0x175be4: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x175be4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x175be8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x175be8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x175bec: 0xc07f5cc  jal         func_1FD730
    ctx->pc = 0x175BECu;
    SET_GPR_U32(ctx, 31, 0x175BF4u);
    ctx->pc = 0x175BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175BECu;
    // 0x175bf0: 0x2484f828  addiu       $a0, $a0, -0x7D8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD730u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FD730u, 0x175BECu, 0x175BF4u)) {
        return;
    }
    ctx->pc = 0x175BF4u;
label_175bf4:
    // 0x175bf4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x175bf4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_175bf8:
    // 0x175bf8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x175bf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x175bfc: 0x3e00008  jr          $ra
    ctx->pc = 0x175BFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x175C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175BFCu;
        // 0x175c00: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x175BFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x175C04u;
    // 0x175c04: 0x0  nop
    ctx->pc = 0x175c04u;
    // NOP
    ctx->pc = 0x175c08u;
}
