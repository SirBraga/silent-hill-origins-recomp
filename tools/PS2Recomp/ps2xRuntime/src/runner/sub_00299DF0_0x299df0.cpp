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

// Function: sub_00299DF0
// Address: 0x299df0 - 0x299ed0
void sub_00299DF0_0x299df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00299DF0_0x299df0");
#endif

    switch (ctx->pc) {
        case 0x299ea4u: goto label_299ea4;
        case 0x299eb8u: goto label_299eb8;
        default: break;
    }

    ctx->pc = 0x299df0u;

    // 0x299df0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x299df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x299df4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x299df4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x299df8: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x299df8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x299dfc: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x299dfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x299e00: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x299e00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299e04: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x299e04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x299e08: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x299e08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299e0c: 0x2444d848  addiu       $a0, $v0, -0x27B8
    ctx->pc = 0x299e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957128));
    // 0x299e10: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x299e10u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x299e14: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x299e14u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299e18: 0x1620000c  bnez        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x299E18u;
    {
        const bool branch_taken_0x299e18 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x299E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299E18u;
        // 0x299e1c: 0xace40028  sw          $a0, 0x28($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 40), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299e18) {
            ctx->pc = 0x299E4Cu;
            goto label_299e4c;
        }
    }
    ctx->pc = 0x299E20u;
    // 0x299e20: 0x94830008  lhu         $v1, 0x8($a0)
    ctx->pc = 0x299e20u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x299e24: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x299e24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x299e28: 0xdc46d848  ld          $a2, -0x27B8($v0)
    ctx->pc = 0x299e28u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 4294957128)));
    // 0x299e2c: 0xdc840008  ld          $a0, 0x8($a0)
    ctx->pc = 0x299e2cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x299e30: 0x24e2fff8  addiu       $v0, $a3, -0x8
    ctx->pc = 0x299e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967288));
    // 0x299e34: 0x2021023  subu        $v0, $s0, $v0
    ctx->pc = 0x299e34u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x299e38: 0xffa60010  sd          $a2, 0x10($sp)
    ctx->pc = 0x299e38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 6));
    // 0x299e3c: 0xffa40018  sd          $a0, 0x18($sp)
    ctx->pc = 0x299e3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 4));
    // 0x299e40: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x299e40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x299e44: 0xace50028  sw          $a1, 0x28($a3)
    ctx->pc = 0x299e44u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 40), GPR_U32(ctx, 5));
    // 0x299e48: 0xa7a30018  sh          $v1, 0x18($sp)
    ctx->pc = 0x299e48u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 24), (uint16_t)GPR_U32(ctx, 3));
label_299e4c:
    // 0x299e4c: 0x3c07006b  lui         $a3, 0x6B
    ctx->pc = 0x299e4cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)107 << 16));
    // 0x299e50: 0x2524fff8  addiu       $a0, $t1, -0x8
    ctx->pc = 0x299e50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967288));
    // 0x299e54: 0x24e2d868  addiu       $v0, $a3, -0x2798
    ctx->pc = 0x299e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294957160));
    // 0x299e58: 0x2042023  subu        $a0, $s0, $a0
    ctx->pc = 0x299e58u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x299e5c: 0xad220028  sw          $v0, 0x28($t1)
    ctx->pc = 0x299e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 40), GPR_U32(ctx, 2));
    // 0x299e60: 0x32280002  andi        $t0, $s1, 0x2
    ctx->pc = 0x299e60u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)2);
    // 0x299e64: 0x94430008  lhu         $v1, 0x8($v0)
    ctx->pc = 0x299e64u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x299e68: 0xdc460008  ld          $a2, 0x8($v0)
    ctx->pc = 0x299e68u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x299e6c: 0xdce5d868  ld          $a1, -0x2798($a3)
    ctx->pc = 0x299e6cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 7), 4294957160)));
    // 0x299e70: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x299e70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x299e74: 0xffa60008  sd          $a2, 0x8($sp)
    ctx->pc = 0x299e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 6));
    // 0x299e78: 0xffa50000  sd          $a1, 0x0($sp)
    ctx->pc = 0x299e78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 5));
    // 0x299e7c: 0xa7a30008  sh          $v1, 0x8($sp)
    ctx->pc = 0x299e7cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x299e80: 0x11000008  beqz        $t0, . + 4 + (0x8 << 2)
    ctx->pc = 0x299E80u;
    {
        const bool branch_taken_0x299e80 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x299E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299E80u;
        // 0x299e84: 0xad3d0028  sw          $sp, 0x28($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 40), GPR_U32(ctx, 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299e80) {
            ctx->pc = 0x299EA4u;
            goto label_299ea4;
        }
    }
    ctx->pc = 0x299E88u;
    // 0x299e88: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x299e88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x299e8c: 0x8d240020  lw          $a0, 0x20($t1)
    ctx->pc = 0x299e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 32)));
    // 0x299e90: 0x2442da40  addiu       $v0, $v0, -0x25C0
    ctx->pc = 0x299e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957632));
    // 0x299e94: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x299E94u;
    {
        const bool branch_taken_0x299e94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x299E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299E94u;
        // 0x299e98: 0xad220028  sw          $v0, 0x28($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299e94) {
            ctx->pc = 0x299EA4u;
            goto label_299ea4;
        }
    }
    ctx->pc = 0x299E9Cu;
    // 0x299e9c: 0xc0808d4  jal         func_202350
    ctx->pc = 0x299E9Cu;
    SET_GPR_U32(ctx, 31, 0x299EA4u);
    ctx->pc = 0x202350u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202350u, 0x299E9Cu, 0x299EA4u)) {
        return;
    }
    ctx->pc = 0x299EA4u;
label_299ea4:
    // 0x299ea4: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x299ea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x299ea8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x299EA8u;
    {
        const bool branch_taken_0x299ea8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x299EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299EA8u;
        // 0x299eac: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299ea8) {
            ctx->pc = 0x299EBCu;
            goto label_299ebc;
        }
    }
    ctx->pc = 0x299EB0u;
    // 0x299eb0: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x299EB0u;
    SET_GPR_U32(ctx, 31, 0x299EB8u);
    ctx->pc = 0x299EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299EB0u;
    // 0x299eb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x299EB0u, 0x299EB8u)) {
        return;
    }
    ctx->pc = 0x299EB8u;
label_299eb8:
    // 0x299eb8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x299eb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_299ebc:
    // 0x299ebc: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x299ebcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x299ec0: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x299ec0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x299ec4: 0x3e00008  jr          $ra
    ctx->pc = 0x299EC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x299EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299EC4u;
        // 0x299ec8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x299EC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x299ECCu;
    // 0x299ecc: 0x0  nop
    ctx->pc = 0x299eccu;
    // NOP
    ctx->pc = 0x299ed0u;
}
