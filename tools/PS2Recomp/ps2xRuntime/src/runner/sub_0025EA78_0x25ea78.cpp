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

// Function: sub_0025EA78
// Address: 0x25ea78 - 0x25eba0
void sub_0025EA78_0x25ea78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025EA78_0x25ea78");
#endif

    switch (ctx->pc) {
        case 0x25eac0u: goto label_25eac0;
        case 0x25eb10u: goto label_25eb10;
        default: break;
    }

    ctx->pc = 0x25ea78u;

    // 0x25ea78: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25ea78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25ea7c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x25ea7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x25ea80: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x25ea80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x25ea84: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x25ea84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x25ea88: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x25ea88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ea8c: 0x30a20008  andi        $v0, $a1, 0x8
    ctx->pc = 0x25ea8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)8);
    // 0x25ea90: 0xaf858618  sw          $a1, -0x79E8($gp)
    ctx->pc = 0x25ea90u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936088), GPR_U32(ctx, 5));
    // 0x25ea94: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x25ea94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x25ea98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25ea98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25ea9c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x25EA9Cu;
    {
        const bool branch_taken_0x25ea9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25EAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EA9Cu;
        // 0x25eaa0: 0x3c050026  lui         $a1, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ea9c) {
            ctx->pc = 0x25EAD8u;
            goto label_25ead8;
        }
    }
    ctx->pc = 0x25EAA4u;
    // 0x25eaa4: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x25eaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x25eaa8: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x25eaa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x25eaac: 0x244243d0  addiu       $v0, $v0, 0x43D0
    ctx->pc = 0x25eaacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17360));
    // 0x25eab0: 0x246343b0  addiu       $v1, $v1, 0x43B0
    ctx->pc = 0x25eab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17328));
    // 0x25eab4: 0xaf828644  sw          $v0, -0x79BC($gp)
    ctx->pc = 0x25eab4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936132), GPR_U32(ctx, 2));
    // 0x25eab8: 0x2463001c  addiu       $v1, $v1, 0x1C
    ctx->pc = 0x25eab8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28));
    // 0x25eabc: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x25eabcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_25eac0:
    // 0x25eac0: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x25eac0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x25eac4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x25eac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x25eac8: 0x0  nop
    ctx->pc = 0x25eac8u;
    // NOP
    // 0x25eacc: 0x0  nop
    ctx->pc = 0x25eaccu;
    // NOP
    // 0x25ead0: 0x441fffb  bgez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x25EAD0u;
    {
        const bool branch_taken_0x25ead0 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x25EAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EAD0u;
        // 0x25ead4: 0x2463fffc  addiu       $v1, $v1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ead0) {
            ctx->pc = 0x25EAC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25eac0;
        }
    }
    ctx->pc = 0x25EAD8u;
label_25ead8:
    // 0x25ead8: 0x8f838618  lw          $v1, -0x79E8($gp)
    ctx->pc = 0x25ead8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936088)));
    // 0x25eadc: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x25eadcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x25eae0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x25EAE0u;
    {
        const bool branch_taken_0x25eae0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25EAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EAE0u;
        // 0x25eae4: 0x30620040  andi        $v0, $v1, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25eae0) {
            ctx->pc = 0x25EB00u;
            goto label_25eb00;
        }
    }
    ctx->pc = 0x25EAE8u;
    // 0x25eae8: 0xaf80861c  sw          $zero, -0x79E4($gp)
    ctx->pc = 0x25eae8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936092), GPR_U32(ctx, 0));
    // 0x25eaec: 0xaf808624  sw          $zero, -0x79DC($gp)
    ctx->pc = 0x25eaecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936100), GPR_U32(ctx, 0));
    // 0x25eaf0: 0xaf808640  sw          $zero, -0x79C0($gp)
    ctx->pc = 0x25eaf0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936128), GPR_U32(ctx, 0));
    // 0x25eaf4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x25EAF4u;
    {
        const bool branch_taken_0x25eaf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25EAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EAF4u;
        // 0x25eaf8: 0xaf808634  sw          $zero, -0x79CC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936116), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25eaf4) {
            ctx->pc = 0x25EB00u;
            goto label_25eb00;
        }
    }
    ctx->pc = 0x25EAFCu;
    // 0x25eafc: 0xaf80862c  sw          $zero, -0x79D4($gp)
    ctx->pc = 0x25eafcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936108), GPR_U32(ctx, 0));
label_25eb00:
    // 0x25eb00: 0x8c840fc8  lw          $a0, 0xFC8($a0)
    ctx->pc = 0x25eb00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4040)));
    // 0x25eb04: 0x24a5ea08  addiu       $a1, $a1, -0x15F8
    ctx->pc = 0x25eb04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961672));
    // 0x25eb08: 0xc0979d6  jal         func_25E758
    ctx->pc = 0x25EB08u;
    SET_GPR_U32(ctx, 31, 0x25EB10u);
    ctx->pc = 0x25EB0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25EB08u;
    // 0x25eb0c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E758u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25E758u, 0x25EB08u, 0x25EB10u)) {
        return;
    }
    ctx->pc = 0x25EB10u;
label_25eb10:
    // 0x25eb10: 0x8f838618  lw          $v1, -0x79E8($gp)
    ctx->pc = 0x25eb10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936088)));
    // 0x25eb14: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x25eb14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x25eb18: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x25EB18u;
    {
        const bool branch_taken_0x25eb18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x25EB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EB18u;
        // 0x25eb1c: 0x8f828620  lw          $v0, -0x79E0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936096)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25eb18) {
            ctx->pc = 0x25EB50u;
            goto label_25eb50;
        }
    }
    ctx->pc = 0x25EB20u;
    // 0x25eb20: 0x8f83861c  lw          $v1, -0x79E4($gp)
    ctx->pc = 0x25eb20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936092)));
    // 0x25eb24: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x25eb24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x25eb28: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x25EB28u;
    {
        const bool branch_taken_0x25eb28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25eb28) {
            ctx->pc = 0x25EB2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25EB28u;
            // 0x25eb2c: 0xaf838620  sw          $v1, -0x79E0($gp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 28), 4294936096), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25EB30u;
            goto label_25eb30;
        }
    }
    ctx->pc = 0x25EB30u;
label_25eb30:
    // 0x25eb30: 0x8f838624  lw          $v1, -0x79DC($gp)
    ctx->pc = 0x25eb30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936100)));
    // 0x25eb34: 0x8f828628  lw          $v0, -0x79D8($gp)
    ctx->pc = 0x25eb34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936104)));
    // 0x25eb38: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x25eb38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x25eb3c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x25EB3Cu;
    {
        const bool branch_taken_0x25eb3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25eb3c) {
            ctx->pc = 0x25EB40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25EB3Cu;
            // 0x25eb40: 0xaf838628  sw          $v1, -0x79D8($gp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 28), 4294936104), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25EB44u;
            goto label_25eb44;
        }
    }
    ctx->pc = 0x25EB44u;
label_25eb44:
    // 0x25eb44: 0xaf808638  sw          $zero, -0x79C8($gp)
    ctx->pc = 0x25eb44u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936120), GPR_U32(ctx, 0));
    // 0x25eb48: 0xaf80863c  sw          $zero, -0x79C4($gp)
    ctx->pc = 0x25eb48u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936124), GPR_U32(ctx, 0));
    // 0x25eb4c: 0xaf808640  sw          $zero, -0x79C0($gp)
    ctx->pc = 0x25eb4cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936128), GPR_U32(ctx, 0));
label_25eb50:
    // 0x25eb50: 0x8f828618  lw          $v0, -0x79E8($gp)
    ctx->pc = 0x25eb50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936088)));
    // 0x25eb54: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x25eb54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x25eb58: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x25EB58u;
    {
        const bool branch_taken_0x25eb58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25EB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EB58u;
        // 0x25eb5c: 0x8f828644  lw          $v0, -0x79BC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936132)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25eb58) {
            ctx->pc = 0x25EB84u;
            goto label_25eb84;
        }
    }
    ctx->pc = 0x25EB60u;
    // 0x25eb60: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x25eb60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x25eb64: 0x246343d0  addiu       $v1, $v1, 0x43D0
    ctx->pc = 0x25eb64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17360));
    // 0x25eb68: 0x8f848630  lw          $a0, -0x79D0($gp)
    ctx->pc = 0x25eb68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936112)));
    // 0x25eb6c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x25eb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25eb70: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x25eb70u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x25eb74: 0x82202b  sltu        $a0, $a0, $v0
    ctx->pc = 0x25eb74u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x25eb78: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x25EB78u;
    {
        const bool branch_taken_0x25eb78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x25EB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EB78u;
        // 0x25eb7c: 0xaf808644  sw          $zero, -0x79BC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936132), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25eb78) {
            ctx->pc = 0x25EB84u;
            goto label_25eb84;
        }
    }
    ctx->pc = 0x25EB80u;
    // 0x25eb80: 0xaf828630  sw          $v0, -0x79D0($gp)
    ctx->pc = 0x25eb80u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936112), GPR_U32(ctx, 2));
label_25eb84:
    // 0x25eb84: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x25eb84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25eb88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25eb88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25eb8c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x25eb8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25eb90: 0xaf808618  sw          $zero, -0x79E8($gp)
    ctx->pc = 0x25eb90u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936088), GPR_U32(ctx, 0));
    // 0x25eb94: 0x3e00008  jr          $ra
    ctx->pc = 0x25EB94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25EB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EB94u;
        // 0x25eb98: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25EB94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25EB9Cu;
    // 0x25eb9c: 0x0  nop
    ctx->pc = 0x25eb9cu;
    // NOP
    ctx->pc = 0x25eba0u;
}
