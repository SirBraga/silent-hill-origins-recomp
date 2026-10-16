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

// Function: sub_0018FC10
// Address: 0x18fc10 - 0x18fd30
void sub_0018FC10_0x18fc10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018FC10_0x18fc10");
#endif

    switch (ctx->pc) {
        case 0x18fc40u: goto label_18fc40;
        case 0x18fc80u: goto label_18fc80;
        case 0x18fcbcu: goto label_18fcbc;
        case 0x18fcd8u: goto label_18fcd8;
        case 0x18fd14u: goto label_18fd14;
        default: break;
    }

    ctx->pc = 0x18fc10u;

    // 0x18fc10: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x18fc10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x18fc14: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x18fc14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x18fc18: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x18fc18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x18fc1c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18fc1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18fc20: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x18fc20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x18fc24: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x18fc24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18fc28: 0x8e02006c  lw          $v0, 0x6C($s0)
    ctx->pc = 0x18fc28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x18fc2c: 0x8e0300e4  lw          $v1, 0xE4($s0)
    ctx->pc = 0x18fc2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
    // 0x18fc30: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x18FC30u;
    {
        const bool branch_taken_0x18fc30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FC30u;
        // 0x18fc34: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fc30) {
            ctx->pc = 0x18FC44u;
            goto label_18fc44;
        }
    }
    ctx->pc = 0x18FC38u;
    // 0x18fc38: 0xc0644cc  jal         func_191330
    ctx->pc = 0x18FC38u;
    SET_GPR_U32(ctx, 31, 0x18FC40u);
    ctx->pc = 0x191330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x191330u, 0x18FC38u, 0x18FC40u)) {
        return;
    }
    ctx->pc = 0x18FC40u;
label_18fc40:
    // 0x18fc40: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x18fc40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_18fc44:
    // 0x18fc44: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x18fc44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18fc48: 0x10600032  beqz        $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x18FC48u;
    {
        const bool branch_taken_0x18fc48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FC48u;
        // 0x18fc4c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fc48) {
            ctx->pc = 0x18FD14u;
            goto label_18fd14;
        }
    }
    ctx->pc = 0x18FC50u;
    // 0x18fc50: 0x8c640050  lw          $a0, 0x50($v1)
    ctx->pc = 0x18fc50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x18fc54: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18FC54u;
    {
        const bool branch_taken_0x18fc54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x18FC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FC54u;
        // 0x18fc58: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fc54) {
            ctx->pc = 0x18FC6Cu;
            goto label_18fc6c;
        }
    }
    ctx->pc = 0x18FC5Cu;
    // 0x18fc5c: 0x10820019  beq         $a0, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x18FC5Cu;
    {
        const bool branch_taken_0x18fc5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x18FC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FC5Cu;
        // 0x18fc60: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fc5c) {
            ctx->pc = 0x18FCC4u;
            goto label_18fcc4;
        }
    }
    ctx->pc = 0x18FC64u;
    // 0x18fc64: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x18FC64u;
    {
        const bool branch_taken_0x18fc64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FC64u;
        // 0x18fc68: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fc64) {
            ctx->pc = 0x18FD1Cu;
            goto label_18fd1c;
        }
    }
    ctx->pc = 0x18FC6Cu;
label_18fc6c:
    // 0x18fc6c: 0x8e050040  lw          $a1, 0x40($s0)
    ctx->pc = 0x18fc6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x18fc70: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x18FC70u;
    {
        const bool branch_taken_0x18fc70 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FC70u;
        // 0x18fc74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fc70) {
            ctx->pc = 0x18FC9Cu;
            goto label_18fc9c;
        }
    }
    ctx->pc = 0x18FC78u;
    // 0x18fc78: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x18fc78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x18fc7c: 0x0  nop
    ctx->pc = 0x18fc7cu;
    // NOP
label_18fc80:
    // 0x18fc80: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x18FC80u;
    {
        const bool branch_taken_0x18fc80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x18FC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FC80u;
        // 0x18fc84: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fc80) {
            ctx->pc = 0x18FC9Cu;
            goto label_18fc9c;
        }
    }
    ctx->pc = 0x18FC88u;
    // 0x18fc88: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x18fc88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x18fc8c: 0x0  nop
    ctx->pc = 0x18fc8cu;
    // NOP
    // 0x18fc90: 0x54a0fffb  bnel        $a1, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x18FC90u;
    {
        const bool branch_taken_0x18fc90 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x18fc90) {
            ctx->pc = 0x18FC94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18FC90u;
            // 0x18fc94: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18FC80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18fc80;
        }
    }
    ctx->pc = 0x18FC98u;
    // 0x18fc98: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x18fc98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18fc9c:
    // 0x18fc9c: 0x5040001e  beql        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x18FC9Cu;
    {
        const bool branch_taken_0x18fc9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18fc9c) {
            ctx->pc = 0x18FCA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18FC9Cu;
            // 0x18fca0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18FD18u;
            goto label_18fd18;
        }
    }
    ctx->pc = 0x18FCA4u;
    // 0x18fca4: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x18fca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x18fca8: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x18FCA8u;
    {
        const bool branch_taken_0x18fca8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FCA8u;
        // 0x18fcac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fca8) {
            ctx->pc = 0x18FD14u;
            goto label_18fd14;
        }
    }
    ctx->pc = 0x18FCB0u;
    // 0x18fcb0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x18fcb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18fcb4: 0xc0644dc  jal         func_191370
    ctx->pc = 0x18FCB4u;
    SET_GPR_U32(ctx, 31, 0x18FCBCu);
    ctx->pc = 0x18FCB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18FCB4u;
    // 0x18fcb8: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x191370u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x191370u, 0x18FCB4u, 0x18FCBCu)) {
        return;
    }
    ctx->pc = 0x18FCBCu;
label_18fcbc:
    // 0x18fcbc: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x18FCBCu;
    {
        const bool branch_taken_0x18fcbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FCBCu;
        // 0x18fcc0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fcbc) {
            ctx->pc = 0x18FD18u;
            goto label_18fd18;
        }
    }
    ctx->pc = 0x18FCC4u;
label_18fcc4:
    // 0x18fcc4: 0x8e050050  lw          $a1, 0x50($s0)
    ctx->pc = 0x18fcc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x18fcc8: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x18FCC8u;
    {
        const bool branch_taken_0x18fcc8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FCC8u;
        // 0x18fccc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fcc8) {
            ctx->pc = 0x18FCF4u;
            goto label_18fcf4;
        }
    }
    ctx->pc = 0x18FCD0u;
    // 0x18fcd0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x18fcd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x18fcd4: 0x0  nop
    ctx->pc = 0x18fcd4u;
    // NOP
label_18fcd8:
    // 0x18fcd8: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x18FCD8u;
    {
        const bool branch_taken_0x18fcd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x18FCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FCD8u;
        // 0x18fcdc: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fcd8) {
            ctx->pc = 0x18FCF4u;
            goto label_18fcf4;
        }
    }
    ctx->pc = 0x18FCE0u;
    // 0x18fce0: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x18fce0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x18fce4: 0x0  nop
    ctx->pc = 0x18fce4u;
    // NOP
    // 0x18fce8: 0x54a0fffb  bnel        $a1, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x18FCE8u;
    {
        const bool branch_taken_0x18fce8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x18fce8) {
            ctx->pc = 0x18FCECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18FCE8u;
            // 0x18fcec: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18FCD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18fcd8;
        }
    }
    ctx->pc = 0x18FCF0u;
    // 0x18fcf0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x18fcf0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18fcf4:
    // 0x18fcf4: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x18FCF4u;
    {
        const bool branch_taken_0x18fcf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18fcf4) {
            ctx->pc = 0x18FCF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18FCF4u;
            // 0x18fcf8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18FD18u;
            goto label_18fd18;
        }
    }
    ctx->pc = 0x18FCFCu;
    // 0x18fcfc: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x18fcfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x18fd00: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18FD00u;
    {
        const bool branch_taken_0x18fd00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FD00u;
        // 0x18fd04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fd00) {
            ctx->pc = 0x18FD14u;
            goto label_18fd14;
        }
    }
    ctx->pc = 0x18FD08u;
    // 0x18fd08: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x18fd08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18fd0c: 0xc0644dc  jal         func_191370
    ctx->pc = 0x18FD0Cu;
    SET_GPR_U32(ctx, 31, 0x18FD14u);
    ctx->pc = 0x18FD10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18FD0Cu;
    // 0x18fd10: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x191370u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x191370u, 0x18FD0Cu, 0x18FD14u)) {
        return;
    }
    ctx->pc = 0x18FD14u;
label_18fd14:
    // 0x18fd14: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x18fd14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18fd18:
    // 0x18fd18: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x18fd18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_18fd1c:
    // 0x18fd1c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x18fd1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18fd20: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18fd20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18fd24: 0x3e00008  jr          $ra
    ctx->pc = 0x18FD24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18FD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FD24u;
        // 0x18fd28: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18FD24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18FD2Cu;
    // 0x18fd2c: 0x0  nop
    ctx->pc = 0x18fd2cu;
    // NOP
    ctx->pc = 0x18fd30u;
}
