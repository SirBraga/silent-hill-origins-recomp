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

// Function: sub_0018C060
// Address: 0x18c060 - 0x18c118
void sub_0018C060_0x18c060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018C060_0x18c060");
#endif

    switch (ctx->pc) {
        case 0x18c0acu: goto label_18c0ac;
        case 0x18c0bcu: goto label_18c0bc;
        case 0x18c0c4u: goto label_18c0c4;
        case 0x18c0dcu: goto label_18c0dc;
        case 0x18c0ecu: goto label_18c0ec;
        case 0x18c0f8u: goto label_18c0f8;
        default: break;
    }

    ctx->pc = 0x18c060u;

    // 0x18c060: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x18c060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x18c064: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x18c064u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x18c068: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x18c068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x18c06c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x18c06cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x18c070: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x18c070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x18c074: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x18c074u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c078: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x18c078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x18c07c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x18c07cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c080: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18c080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x18c084: 0x244290c0  addiu       $v0, $v0, -0x6F40
    ctx->pc = 0x18c084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938816));
    // 0x18c088: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18c088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18c08c: 0x24639078  addiu       $v1, $v1, -0x6F88
    ctx->pc = 0x18c08cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938744));
    // 0x18c090: 0x26300038  addiu       $s0, $s1, 0x38
    ctx->pc = 0x18c090u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x18c094: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x18c094u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x18c098: 0xae22003c  sw          $v0, 0x3C($s1)
    ctx->pc = 0x18c098u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 2));
    // 0x18c09c: 0x24a5f898  addiu       $a1, $a1, -0x768
    ctx->pc = 0x18c09cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965400));
    // 0x18c0a0: 0xae230034  sw          $v1, 0x34($s1)
    ctx->pc = 0x18c0a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 3));
    // 0x18c0a4: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x18C0A4u;
    SET_GPR_U32(ctx, 31, 0x18C0ACu);
    ctx->pc = 0x18C0A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C0A4u;
    // 0x18c0a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x18C0A4u, 0x18C0ACu)) {
        return;
    }
    ctx->pc = 0x18C0ACu;
label_18c0ac:
    // 0x18c0ac: 0x26320044  addiu       $s2, $s1, 0x44
    ctx->pc = 0x18c0acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 68));
    // 0x18c0b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18c0b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c0b4: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x18C0B4u;
    SET_GPR_U32(ctx, 31, 0x18C0BCu);
    ctx->pc = 0x18C0B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C0B4u;
    // 0x18c0b8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x18C0B4u, 0x18C0BCu)) {
        return;
    }
    ctx->pc = 0x18C0BCu;
label_18c0bc:
    // 0x18c0bc: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x18C0BCu;
    SET_GPR_U32(ctx, 31, 0x18C0C4u);
    ctx->pc = 0x18C0C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C0BCu;
    // 0x18c0c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x18C0BCu, 0x18C0C4u)) {
        return;
    }
    ctx->pc = 0x18C0C4u;
label_18c0c4:
    // 0x18c0c4: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x18c0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x18c0c8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18C0C8u;
    {
        const bool branch_taken_0x18c0c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C0C8u;
        // 0x18c0cc: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c0c8) {
            ctx->pc = 0x18C0E0u;
            goto label_18c0e0;
        }
    }
    ctx->pc = 0x18C0D0u;
    // 0x18c0d0: 0x8e250050  lw          $a1, 0x50($s1)
    ctx->pc = 0x18c0d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x18c0d4: 0xc0640ce  jal         func_190338
    ctx->pc = 0x18C0D4u;
    SET_GPR_U32(ctx, 31, 0x18C0DCu);
    ctx->pc = 0x18C0D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C0D4u;
    // 0x18c0d8: 0x8c448b2c  lw          $a0, -0x74D4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190338u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x190338u, 0x18C0D4u, 0x18C0DCu)) {
        return;
    }
    ctx->pc = 0x18C0DCu;
label_18c0dc:
    // 0x18c0dc: 0xae200054  sw          $zero, 0x54($s1)
    ctx->pc = 0x18c0dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 0));
label_18c0e0:
    // 0x18c0e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x18c0e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c0e4: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x18C0E4u;
    SET_GPR_U32(ctx, 31, 0x18C0ECu);
    ctx->pc = 0x18C0E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C0E4u;
    // 0x18c0e8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x18C0E4u, 0x18C0ECu)) {
        return;
    }
    ctx->pc = 0x18C0ECu;
label_18c0ec:
    // 0x18c0ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18c0ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c0f0: 0xc04f084  jal         func_13C210
    ctx->pc = 0x18C0F0u;
    SET_GPR_U32(ctx, 31, 0x18C0F8u);
    ctx->pc = 0x18C0F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C0F0u;
    // 0x18c0f4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C210u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C210u, 0x18C0F0u, 0x18C0F8u)) {
        return;
    }
    ctx->pc = 0x18C0F8u;
label_18c0f8:
    // 0x18c0f8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x18c0f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18c0fc: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x18c0fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18c100: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18c100u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18c104: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x18c104u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18c108: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18c108u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18c10c: 0x3e00008  jr          $ra
    ctx->pc = 0x18C10Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18C110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C10Cu;
        // 0x18c110: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18C10Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18C114u;
    // 0x18c114: 0x0  nop
    ctx->pc = 0x18c114u;
    // NOP
    ctx->pc = 0x18c118u;
}
