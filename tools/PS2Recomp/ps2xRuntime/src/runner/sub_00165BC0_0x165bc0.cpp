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

// Function: sub_00165BC0
// Address: 0x165bc0 - 0x165c70
void sub_00165BC0_0x165bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00165BC0_0x165bc0");
#endif

    switch (ctx->pc) {
        case 0x165c08u: goto label_165c08;
        case 0x165c24u: goto label_165c24;
        case 0x165c38u: goto label_165c38;
        case 0x165c54u: goto label_165c54;
        default: break;
    }

    ctx->pc = 0x165bc0u;

label_165bc0:
    // 0x165bc0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x165bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x165bc4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x165bc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x165bc8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x165bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x165bcc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x165bccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165bd0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x165bd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x165bd4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x165bd4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165bd8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x165bd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x165bdc: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x165bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x165be0: 0x92230028  lbu         $v1, 0x28($s1)
    ctx->pc = 0x165be0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x165be4: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x165be4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x165be8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x165be8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x165bec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x165becu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x165bf0: 0x90440004  lbu         $a0, 0x4($v0)
    ctx->pc = 0x165bf0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x165bf4: 0x54850006  bnel        $a0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x165BF4u;
    {
        const bool branch_taken_0x165bf4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        if (branch_taken_0x165bf4) {
            ctx->pc = 0x165BF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x165BF4u;
            // 0x165bf8: 0x8e22003c  lw          $v0, 0x3C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x165C10u;
            goto label_165c10;
        }
    }
    ctx->pc = 0x165BFCu;
    // 0x165bfc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x165bfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165c00: 0xc059092  jal         func_164248
    ctx->pc = 0x165C00u;
    SET_GPR_U32(ctx, 31, 0x165C08u);
    ctx->pc = 0x165C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165C00u;
    // 0x165c04: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164248u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x164248u, 0x165C00u, 0x165C08u)) {
        return;
    }
    ctx->pc = 0x165C08u;
label_165c08:
    // 0x165c08: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x165C08u;
    {
        const bool branch_taken_0x165c08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165C08u;
        // 0x165c0c: 0x8e250060  lw          $a1, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165c08) {
            ctx->pc = 0x165C40u;
            goto label_165c40;
        }
    }
    ctx->pc = 0x165C10u;
label_165c10:
    // 0x165c10: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x165C10u;
    {
        const bool branch_taken_0x165c10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x165c10) {
            ctx->pc = 0x165C14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x165C10u;
            // 0x165c14: 0x8e250060  lw          $a1, 0x60($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x165C40u;
            goto label_165c40;
        }
    }
    ctx->pc = 0x165C18u;
    // 0x165c18: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x165c18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x165c1c: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x165C1Cu;
    SET_GPR_U32(ctx, 31, 0x165C24u);
    ctx->pc = 0x165C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165C1Cu;
    // 0x165c20: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x165C1Cu, 0x165C24u)) {
        return;
    }
    ctx->pc = 0x165C24u;
label_165c24:
    // 0x165c24: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x165c24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165c28: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x165c28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165c2c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x165c2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165c30: 0xc0590f6  jal         func_1643D8
    ctx->pc = 0x165C30u;
    SET_GPR_U32(ctx, 31, 0x165C38u);
    ctx->pc = 0x165C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165C30u;
    // 0x165c34: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1643D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1643D8u, 0x165C30u, 0x165C38u)) {
        return;
    }
    ctx->pc = 0x165C38u;
label_165c38:
    // 0x165c38: 0xae30003c  sw          $s0, 0x3C($s1)
    ctx->pc = 0x165c38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 16));
    // 0x165c3c: 0x8e250060  lw          $a1, 0x60($s1)
    ctx->pc = 0x165c3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_165c40:
    // 0x165c40: 0xae200040  sw          $zero, 0x40($s1)
    ctx->pc = 0x165c40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 0));
    // 0x165c44: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x165C44u;
    {
        const bool branch_taken_0x165c44 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x165C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165C44u;
        // 0x165c48: 0xae200044  sw          $zero, 0x44($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165c44) {
            ctx->pc = 0x165C54u;
            goto label_165c54;
        }
    }
    ctx->pc = 0x165C4Cu;
    // 0x165c4c: 0xc0596f0  jal         func_165BC0
    ctx->pc = 0x165C4Cu;
    SET_GPR_U32(ctx, 31, 0x165C54u);
    ctx->pc = 0x165C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165C4Cu;
    // 0x165c50: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165BC0u;
    goto label_165bc0;
    ctx->pc = 0x165C54u;
label_165c54:
    // 0x165c54: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x165c54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x165c58: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x165c58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x165c5c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x165c5cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x165c60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x165c60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x165c64: 0x3e00008  jr          $ra
    ctx->pc = 0x165C64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x165C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165C64u;
        // 0x165c68: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x165C64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x165C6Cu;
    // 0x165c6c: 0x0  nop
    ctx->pc = 0x165c6cu;
    // NOP
    ctx->pc = 0x165c70u;
}
