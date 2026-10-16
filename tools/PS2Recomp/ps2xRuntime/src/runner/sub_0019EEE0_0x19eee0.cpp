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

// Function: sub_0019EEE0
// Address: 0x19eee0 - 0x19efc0
void sub_0019EEE0_0x19eee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019EEE0_0x19eee0");
#endif

    switch (ctx->pc) {
        case 0x19ef48u: goto label_19ef48;
        case 0x19ef58u: goto label_19ef58;
        case 0x19ef6cu: goto label_19ef6c;
        case 0x19ef8cu: goto label_19ef8c;
        case 0x19ef94u: goto label_19ef94;
        case 0x19efa0u: goto label_19efa0;
        default: break;
    }

    ctx->pc = 0x19eee0u;

    // 0x19eee0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x19eee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x19eee4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x19eee4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x19eee8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x19eee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x19eeec: 0x2442a6a8  addiu       $v0, $v0, -0x5958
    ctx->pc = 0x19eeecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944424));
    // 0x19eef0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x19eef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x19eef4: 0x3c07005c  lui         $a3, 0x5C
    ctx->pc = 0x19eef4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)92 << 16));
    // 0x19eef8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x19eef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x19eefc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x19eefcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ef00: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x19ef00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x19ef04: 0x3c080034  lui         $t0, 0x34
    ctx->pc = 0x19ef04u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)52 << 16));
    // 0x19ef08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19ef08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19ef0c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x19ef0cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ef10: 0xae42003c  sw          $v0, 0x3C($s2)
    ctx->pc = 0x19ef10u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 2));
    // 0x19ef14: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x19ef14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ef18: 0x8e440038  lw          $a0, 0x38($s2)
    ctx->pc = 0x19ef18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x19ef1c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x19ef1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ef20: 0x8e460024  lw          $a2, 0x24($s2)
    ctx->pc = 0x19ef20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x19ef24: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x19ef24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x19ef28: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x19ef28u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x19ef2c: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x19ef2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x19ef30: 0x8ce20160  lw          $v0, 0x160($a3)
    ctx->pc = 0x19ef30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 352)));
    // 0x19ef34: 0x8d048668  lw          $a0, -0x7998($t0)
    ctx->pc = 0x19ef34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294936168)));
    // 0x19ef38: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x19ef38u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x19ef3c: 0xace20160  sw          $v0, 0x160($a3)
    ctx->pc = 0x19ef3cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 352), GPR_U32(ctx, 2));
    // 0x19ef40: 0xc0595ae  jal         func_1656B8
    ctx->pc = 0x19EF40u;
    SET_GPR_U32(ctx, 31, 0x19EF48u);
    ctx->pc = 0x19EF44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EF40u;
    // 0x19ef44: 0x8e500018  lw          $s0, 0x18($s2) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1656B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1656B8u, 0x19EF40u, 0x19EF48u)) {
        return;
    }
    ctx->pc = 0x19EF48u;
label_19ef48:
    // 0x19ef48: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x19ef48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19ef4c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x19EF4Cu;
    {
        const bool branch_taken_0x19ef4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ef4c) {
            ctx->pc = 0x19EF84u;
            goto label_19ef84;
        }
    }
    ctx->pc = 0x19EF54u;
    // 0x19ef54: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x19ef54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_19ef58:
    // 0x19ef58: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x19ef58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x19ef5c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19ef5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ef60: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19ef60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19ef64: 0xc080608  jal         func_201820
    ctx->pc = 0x19EF64u;
    SET_GPR_U32(ctx, 31, 0x19EF6Cu);
    ctx->pc = 0x19EF68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EF64u;
    // 0x19ef68: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201820u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x201820u, 0x19EF64u, 0x19EF6Cu)) {
        return;
    }
    ctx->pc = 0x19EF6Cu;
label_19ef6c:
    // 0x19ef6c: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x19ef6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x19ef70: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x19ef70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19ef74: 0x307100ff  andi        $s1, $v1, 0xFF
    ctx->pc = 0x19ef74u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x19ef78: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x19ef78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x19ef7c: 0x5440fff6  bnel        $v0, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x19EF7Cu;
    {
        const bool branch_taken_0x19ef7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19ef7c) {
            ctx->pc = 0x19EF80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19EF7Cu;
            // 0x19ef80: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19EF58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19ef58;
        }
    }
    ctx->pc = 0x19EF84u;
label_19ef84:
    // 0x19ef84: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x19EF84u;
    SET_GPR_U32(ctx, 31, 0x19EF8Cu);
    ctx->pc = 0x19EF88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EF84u;
    // 0x19ef88: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x19EF84u, 0x19EF8Cu)) {
        return;
    }
    ctx->pc = 0x19EF8Cu;
label_19ef8c:
    // 0x19ef8c: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x19EF8Cu;
    SET_GPR_U32(ctx, 31, 0x19EF94u);
    ctx->pc = 0x19EF90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EF8Cu;
    // 0x19ef90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x19EF8Cu, 0x19EF94u)) {
        return;
    }
    ctx->pc = 0x19EF94u;
label_19ef94:
    // 0x19ef94: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19ef94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ef98: 0xc080596  jal         func_201658
    ctx->pc = 0x19EF98u;
    SET_GPR_U32(ctx, 31, 0x19EFA0u);
    ctx->pc = 0x19EF9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19EF98u;
    // 0x19ef9c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201658u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x201658u, 0x19EF98u, 0x19EFA0u)) {
        return;
    }
    ctx->pc = 0x19EFA0u;
label_19efa0:
    // 0x19efa0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x19efa0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19efa4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x19efa4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19efa8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x19efa8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19efac: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x19efacu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19efb0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19efb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19efb4: 0x3e00008  jr          $ra
    ctx->pc = 0x19EFB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19EFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19EFB4u;
        // 0x19efb8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19EFB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19EFBCu;
    // 0x19efbc: 0x0  nop
    ctx->pc = 0x19efbcu;
    // NOP
    ctx->pc = 0x19efc0u;
}
