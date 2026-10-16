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

// Function: sub_00165AF8
// Address: 0x165af8 - 0x165bc0
void sub_00165AF8_0x165af8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00165AF8_0x165af8");
#endif

    switch (ctx->pc) {
        case 0x165b48u: goto label_165b48;
        case 0x165b64u: goto label_165b64;
        case 0x165b78u: goto label_165b78;
        case 0x165ba8u: goto label_165ba8;
        default: break;
    }

    ctx->pc = 0x165af8u;

label_165af8:
    // 0x165af8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x165af8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x165afc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x165afcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x165b00: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x165b00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x165b04: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x165b04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165b08: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x165b08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x165b0c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x165b0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x165b10: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x165b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x165b14: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x165B14u;
    {
        const bool branch_taken_0x165b14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x165B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165B14u;
        // 0x165b18: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165b14) {
            ctx->pc = 0x165BA8u;
            goto label_165ba8;
        }
    }
    ctx->pc = 0x165B1Cu;
    // 0x165b1c: 0x92230028  lbu         $v1, 0x28($s1)
    ctx->pc = 0x165b1cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x165b20: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x165b20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x165b24: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x165b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x165b28: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x165b28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x165b2c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x165b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x165b30: 0x90440004  lbu         $a0, 0x4($v0)
    ctx->pc = 0x165b30u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x165b34: 0x54850006  bnel        $a0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x165B34u;
    {
        const bool branch_taken_0x165b34 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        if (branch_taken_0x165b34) {
            ctx->pc = 0x165B38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x165B34u;
            // 0x165b38: 0x8e22003c  lw          $v0, 0x3C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x165B50u;
            goto label_165b50;
        }
    }
    ctx->pc = 0x165B3Cu;
    // 0x165b3c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x165b3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165b40: 0xc059092  jal         func_164248
    ctx->pc = 0x165B40u;
    SET_GPR_U32(ctx, 31, 0x165B48u);
    ctx->pc = 0x165B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165B40u;
    // 0x165b44: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164248u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x164248u, 0x165B40u, 0x165B48u)) {
        return;
    }
    ctx->pc = 0x165B48u;
label_165b48:
    // 0x165b48: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x165B48u;
    {
        const bool branch_taken_0x165b48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165B48u;
        // 0x165b4c: 0x8e250060  lw          $a1, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165b48) {
            ctx->pc = 0x165B80u;
            goto label_165b80;
        }
    }
    ctx->pc = 0x165B50u;
label_165b50:
    // 0x165b50: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x165B50u;
    {
        const bool branch_taken_0x165b50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x165b50) {
            ctx->pc = 0x165B54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x165B50u;
            // 0x165b54: 0x8e250060  lw          $a1, 0x60($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x165B80u;
            goto label_165b80;
        }
    }
    ctx->pc = 0x165B58u;
    // 0x165b58: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x165b58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x165b5c: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x165B5Cu;
    SET_GPR_U32(ctx, 31, 0x165B64u);
    ctx->pc = 0x165B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165B5Cu;
    // 0x165b60: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x165B5Cu, 0x165B64u)) {
        return;
    }
    ctx->pc = 0x165B64u;
label_165b64:
    // 0x165b64: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x165b64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165b68: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x165b68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165b6c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x165b6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165b70: 0xc0590f6  jal         func_1643D8
    ctx->pc = 0x165B70u;
    SET_GPR_U32(ctx, 31, 0x165B78u);
    ctx->pc = 0x165B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165B70u;
    // 0x165b74: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1643D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1643D8u, 0x165B70u, 0x165B78u)) {
        return;
    }
    ctx->pc = 0x165B78u;
label_165b78:
    // 0x165b78: 0xae30003c  sw          $s0, 0x3C($s1)
    ctx->pc = 0x165b78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 16));
    // 0x165b7c: 0x8e250060  lw          $a1, 0x60($s1)
    ctx->pc = 0x165b7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_165b80:
    // 0x165b80: 0xae200048  sw          $zero, 0x48($s1)
    ctx->pc = 0x165b80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 0));
    // 0x165b84: 0xae20004c  sw          $zero, 0x4C($s1)
    ctx->pc = 0x165b84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 0));
    // 0x165b88: 0xae200040  sw          $zero, 0x40($s1)
    ctx->pc = 0x165b88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 0));
    // 0x165b8c: 0xae200044  sw          $zero, 0x44($s1)
    ctx->pc = 0x165b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 0));
    // 0x165b90: 0xae200050  sw          $zero, 0x50($s1)
    ctx->pc = 0x165b90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
    // 0x165b94: 0xae20005c  sw          $zero, 0x5C($s1)
    ctx->pc = 0x165b94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 0));
    // 0x165b98: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x165B98u;
    {
        const bool branch_taken_0x165b98 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x165B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165B98u;
        // 0x165b9c: 0xae200058  sw          $zero, 0x58($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165b98) {
            ctx->pc = 0x165BA8u;
            goto label_165ba8;
        }
    }
    ctx->pc = 0x165BA0u;
    // 0x165ba0: 0xc0596be  jal         func_165AF8
    ctx->pc = 0x165BA0u;
    SET_GPR_U32(ctx, 31, 0x165BA8u);
    ctx->pc = 0x165BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165BA0u;
    // 0x165ba4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165AF8u;
    goto label_165af8;
    ctx->pc = 0x165BA8u;
label_165ba8:
    // 0x165ba8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x165ba8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x165bac: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x165bacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x165bb0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x165bb0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x165bb4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x165bb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x165bb8: 0x3e00008  jr          $ra
    ctx->pc = 0x165BB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x165BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165BB8u;
        // 0x165bbc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x165BB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x165BC0u;
}
