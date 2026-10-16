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

// Function: sub_00182A68
// Address: 0x182a68 - 0x182b70
void sub_00182A68_0x182a68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00182A68_0x182a68");
#endif

    switch (ctx->pc) {
        case 0x182ae0u: goto label_182ae0;
        case 0x182af4u: goto label_182af4;
        case 0x182b14u: goto label_182b14;
        default: break;
    }

    ctx->pc = 0x182a68u;

    // 0x182a68: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x182a68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x182a6c: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x182a6cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x182a70: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x182a70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x182a74: 0x3c050034  lui         $a1, 0x34
    ctx->pc = 0x182a74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52 << 16));
    // 0x182a78: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x182a78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x182a7c: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x182a7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x182a80: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x182a80u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182a84: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x182a84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x182a88: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x182a88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x182a8c: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x182a8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x182a90: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x182a90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x182a94: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x182a94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x182a98: 0x8cd10000  lw          $s1, 0x0($a2)
    ctx->pc = 0x182a98u;
    SET_GPR_S32(ctx, 17, (int32_t)runtime->Load32(rdram, ctx, 0x10000000u)); // MMIO: 0x10000000
    // 0x182a9c: 0x8ca38a00  lw          $v1, -0x7600($a1)
    ctx->pc = 0x182a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x338A00u));
    // 0x182aa0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x182aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x10000000u)); // MMIO: 0x10000000
    // 0x182aa4: 0x2239021  addu        $s2, $s1, $v1
    ctx->pc = 0x182aa4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x182aa8: 0x52102b  sltu        $v0, $v0, $s2
    ctx->pc = 0x182aa8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x182aac: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x182AACu;
    {
        const bool branch_taken_0x182aac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x182AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182AACu;
        // 0x182ab0: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182aac) {
            ctx->pc = 0x182B48u;
            goto label_182b48;
        }
    }
    ctx->pc = 0x182AB4u;
    // 0x182ab4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x182ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x182ab8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x182ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x10000000u)); // MMIO: 0x10000000
    // 0x182abc: 0x51102b  sltu        $v0, $v0, $s1
    ctx->pc = 0x182abcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x182ac0: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x182AC0u;
    {
        const bool branch_taken_0x182ac0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x182AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182AC0u;
        // 0x182ac4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182ac0) {
            ctx->pc = 0x182B4Cu;
            goto label_182b4c;
        }
    }
    ctx->pc = 0x182AC8u;
    // 0x182ac8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x182ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x182acc: 0x3c10006c  lui         $s0, 0x6C
    ctx->pc = 0x182accu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)108 << 16));
    // 0x182ad0: 0x24563b80  addiu       $s6, $v0, 0x3B80
    ctx->pc = 0x182ad0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 15232));
    // 0x182ad4: 0x3c13006c  lui         $s3, 0x6C
    ctx->pc = 0x182ad4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)108 << 16));
    // 0x182ad8: 0x3c151000  lui         $s5, 0x1000
    ctx->pc = 0x182ad8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)4096 << 16));
    // 0x182adc: 0x8e053b80  lw          $a1, 0x3B80($s0)
    ctx->pc = 0x182adcu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6C3B80u));
label_182ae0:
    // 0x182ae0: 0x14a00009  bnez        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x182AE0u;
    {
        const bool branch_taken_0x182ae0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x182AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182AE0u;
        // 0x182ae4: 0x2c52823  subu        $a1, $s6, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182ae0) {
            ctx->pc = 0x182B08u;
            goto label_182b08;
        }
    }
    ctx->pc = 0x182AE8u;
    // 0x182ae8: 0x24054000  addiu       $a1, $zero, 0x4000
    ctx->pc = 0x182ae8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x182aec: 0xc060bb4  jal         func_182ED0
    ctx->pc = 0x182AECu;
    SET_GPR_U32(ctx, 31, 0x182AF4u);
    ctx->pc = 0x182AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182AECu;
    // 0x182af0: 0x2664fb80  addiu       $a0, $s3, -0x480 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294966144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182ED0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x182ED0u, 0x182AECu, 0x182AF4u)) {
        return;
    }
    ctx->pc = 0x182AF4u;
label_182af4:
    // 0x182af4: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x182af4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x182af8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x182AF8u;
    {
        const bool branch_taken_0x182af8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x182AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182AF8u;
        // 0x182afc: 0xae023b80  sw          $v0, 0x3B80($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 15232), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182af8) {
            ctx->pc = 0x182B20u;
            goto label_182b20;
        }
    }
    ctx->pc = 0x182B00u;
    // 0x182b00: 0x24a5fb80  addiu       $a1, $a1, -0x480
    ctx->pc = 0x182b00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966144));
    // 0x182b04: 0x0  nop
    ctx->pc = 0x182b04u;
    // NOP
label_182b08:
    // 0x182b08: 0x8e063b80  lw          $a2, 0x3B80($s0)
    ctx->pc = 0x182b08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 15232)));
    // 0x182b0c: 0xc0bf6aa  jal         func_2FDAA8
    ctx->pc = 0x182B0Cu;
    SET_GPR_U32(ctx, 31, 0x182B14u);
    ctx->pc = 0x182B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182B0Cu;
    // 0x182b10: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDAA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2FDAA8u, 0x182B0Cu, 0x182B14u)) {
        return;
    }
    ctx->pc = 0x182B14u;
label_182b14:
    // 0x182b14: 0x8e033b80  lw          $v1, 0x3B80($s0)
    ctx->pc = 0x182b14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 15232)));
    // 0x182b18: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x182b18u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x182b1c: 0xae033b80  sw          $v1, 0x3B80($s0)
    ctx->pc = 0x182b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 15232), GPR_U32(ctx, 3));
label_182b20:
    // 0x182b20: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x182b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x182b24: 0x52102b  sltu        $v0, $v0, $s2
    ctx->pc = 0x182b24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x182b28: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x182B28u;
    {
        const bool branch_taken_0x182b28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x182b28) {
            ctx->pc = 0x182B2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x182B28u;
            // 0x182b2c: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x182B48u;
            goto label_182b48;
        }
    }
    ctx->pc = 0x182B30u;
    // 0x182b30: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x182b30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x182b34: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x182b34u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x10000000u)); // MMIO: 0x10000000
    // 0x182b38: 0x51102b  sltu        $v0, $v0, $s1
    ctx->pc = 0x182b38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x182b3c: 0x1040ffe8  beqz        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x182B3Cu;
    {
        const bool branch_taken_0x182b3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x182B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182B3Cu;
        // 0x182b40: 0x8e053b80  lw          $a1, 0x3B80($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 15232)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182b3c) {
            ctx->pc = 0x182AE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_182ae0;
        }
    }
    ctx->pc = 0x182B44u;
    // 0x182b44: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x182b44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_182b48:
    // 0x182b48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x182b48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_182b4c:
    // 0x182b4c: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x182b4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x182b50: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x182b50u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x182b54: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x182b54u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x182b58: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x182b58u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x182b5c: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x182b5cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x182b60: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x182b60u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x182b64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x182b64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x182b68: 0x3e00008  jr          $ra
    ctx->pc = 0x182B68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x182B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182B68u;
        // 0x182b6c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x182B68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x182B70u;
}
