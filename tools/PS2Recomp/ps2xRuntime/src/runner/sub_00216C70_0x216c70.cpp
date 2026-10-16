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

// Function: sub_00216C70
// Address: 0x216c70 - 0x216dc8
void sub_00216C70_0x216c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00216C70_0x216c70");
#endif

    switch (ctx->pc) {
        case 0x216c80u: goto label_216c80;
        case 0x216c94u: goto label_216c94;
        case 0x216d18u: goto label_216d18;
        default: break;
    }

    ctx->pc = 0x216c70u;

    // 0x216c70: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x216c70u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216c74: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x216c74u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216c78: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x216C78u;
    {
        const bool branch_taken_0x216c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x216C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216C78u;
        // 0x216c7c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216c78) {
            ctx->pc = 0x216D88u;
            goto label_216d88;
        }
    }
    ctx->pc = 0x216C80u;
label_216c80:
    // 0x216c80: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x216C80u;
    {
        const bool branch_taken_0x216c80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x216C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216C80u;
        // 0x216c84: 0x2ca20021  sltiu       $v0, $a1, 0x21 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)33) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x216c80) {
            ctx->pc = 0x216C9Cu;
            goto label_216c9c;
        }
    }
    ctx->pc = 0x216C88u;
    // 0x216c88: 0x8d020260  lw          $v0, 0x260($t0)
    ctx->pc = 0x216c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 608)));
    // 0x216c8c: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x216C8Cu;
    {
        const bool branch_taken_0x216c8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x216C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216C8Cu;
        // 0x216c90: 0x1224821  addu        $t1, $t1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216c8c) {
            ctx->pc = 0x216D84u;
            goto label_216d84;
        }
    }
    ctx->pc = 0x216C94u;
label_216c94:
    // 0x216c94: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x216C94u;
    {
        const bool branch_taken_0x216c94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x216C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216C94u;
        // 0x216c98: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216c94) {
            ctx->pc = 0x216D34u;
            goto label_216d34;
        }
    }
    ctx->pc = 0x216C9Cu;
label_216c9c:
    // 0x216c9c: 0x54400039  bnel        $v0, $zero, . + 4 + (0x39 << 2)
    ctx->pc = 0x216C9Cu;
    {
        const bool branch_taken_0x216c9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x216c9c) {
            ctx->pc = 0x216CA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x216C9Cu;
            // 0x216ca0: 0x8d020260  lw          $v0, 0x260($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 608)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x216D84u;
            goto label_216d84;
        }
    }
    ctx->pc = 0x216CA4u;
    // 0x216ca4: 0x8d040028  lw          $a0, 0x28($t0)
    ctx->pc = 0x216ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 40)));
    // 0x216ca8: 0x55080  sll         $t2, $a1, 2
    ctx->pc = 0x216ca8u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x216cac: 0x1441021  addu        $v0, $t2, $a0
    ctx->pc = 0x216cacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
    // 0x216cb0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x216cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x216cb4: 0x54600033  bnel        $v1, $zero, . + 4 + (0x33 << 2)
    ctx->pc = 0x216CB4u;
    {
        const bool branch_taken_0x216cb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x216cb4) {
            ctx->pc = 0x216CB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x216CB4u;
            // 0x216cb8: 0x8d020260  lw          $v0, 0x260($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 608)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x216D84u;
            goto label_216d84;
        }
    }
    ctx->pc = 0x216CBCu;
    // 0x216cbc: 0x8d070288  lw          $a3, 0x288($t0)
    ctx->pc = 0x216cbcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 648)));
    // 0x216cc0: 0x10e0002e  beqz        $a3, . + 4 + (0x2E << 2)
    ctx->pc = 0x216CC0u;
    {
        const bool branch_taken_0x216cc0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x216CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216CC0u;
        // 0x216cc4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216cc0) {
            ctx->pc = 0x216D7Cu;
            goto label_216d7c;
        }
    }
    ctx->pc = 0x216CC8u;
    // 0x216cc8: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x216cc8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x216ccc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x216cccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x216cd0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x216cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x216cd4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x216cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x216cd8: 0x8d030288  lw          $v1, 0x288($t0)
    ctx->pc = 0x216cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 648)));
    // 0x216cdc: 0x8d04028c  lw          $a0, 0x28C($t0)
    ctx->pc = 0x216cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 652)));
    // 0x216ce0: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x216ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x216ce4: 0xad020288  sw          $v0, 0x288($t0)
    ctx->pc = 0x216ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 648), GPR_U32(ctx, 2));
    // 0x216ce8: 0xace40010  sw          $a0, 0x10($a3)
    ctx->pc = 0x216ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 4));
    // 0x216cec: 0xad07028c  sw          $a3, 0x28C($t0)
    ctx->pc = 0x216cecu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 652), GPR_U32(ctx, 7));
    // 0x216cf0: 0xa4e50000  sh          $a1, 0x0($a3)
    ctx->pc = 0x216cf0u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x216cf4: 0x8ce40008  lw          $a0, 0x8($a3)
    ctx->pc = 0x216cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x216cf8: 0x8d020028  lw          $v0, 0x28($t0)
    ctx->pc = 0x216cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 40)));
    // 0x216cfc: 0x1421021  addu        $v0, $t2, $v0
    ctx->pc = 0x216cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x216d00: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x216d00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x216d04: 0x8d030054  lw          $v1, 0x54($t0)
    ctx->pc = 0x216d04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 84)));
    // 0x216d08: 0x94620008  lhu         $v0, 0x8($v1)
    ctx->pc = 0x216d08u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x216d0c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x216D0Cu;
    {
        const bool branch_taken_0x216d0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x216D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216D0Cu;
        // 0x216d10: 0x8d040058  lw          $a0, 0x58($t0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216d0c) {
            ctx->pc = 0x216D34u;
            goto label_216d34;
        }
    }
    ctx->pc = 0x216D14u;
    // 0x216d14: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x216d14u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_216d18:
    // 0x216d18: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x216d18u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x216d1c: 0x10a2ffdd  beq         $a1, $v0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x216D1Cu;
    {
        const bool branch_taken_0x216d1c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x216D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216D1Cu;
        // 0x216d20: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216d1c) {
            ctx->pc = 0x216C94u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_216c94;
        }
    }
    ctx->pc = 0x216D24u;
    // 0x216d24: 0xc3102a  slt         $v0, $a2, $v1
    ctx->pc = 0x216d24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x216d28: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x216D28u;
    {
        const bool branch_taken_0x216d28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x216D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216D28u;
        // 0x216d2c: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216d28) {
            ctx->pc = 0x216D18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_216d18;
        }
    }
    ctx->pc = 0x216D30u;
    // 0x216d30: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x216d30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_216d34:
    // 0x216d34: 0x8ce40008  lw          $a0, 0x8($a3)
    ctx->pc = 0x216d34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x216d38: 0xace6000c  sw          $a2, 0xC($a3)
    ctx->pc = 0x216d38u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 6));
    // 0x216d3c: 0xa4850000  sh          $a1, 0x0($a0)
    ctx->pc = 0x216d3cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x216d40: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x216d40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x216d44: 0x90c20006  lbu         $v0, 0x6($a2)
    ctx->pc = 0x216d44u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 6)));
    // 0x216d48: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x216d48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x216d4c: 0xa0820006  sb          $v0, 0x6($a0)
    ctx->pc = 0x216d4cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6), (uint8_t)GPR_U32(ctx, 2));
    // 0x216d50: 0x90c30007  lbu         $v1, 0x7($a2)
    ctx->pc = 0x216d50u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 7)));
    // 0x216d54: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x216d54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x216d58: 0xa0830007  sb          $v1, 0x7($a0)
    ctx->pc = 0x216d58u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 7), (uint8_t)GPR_U32(ctx, 3));
    // 0x216d5c: 0xe4810014  swc1        $f1, 0x14($a0)
    ctx->pc = 0x216d5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x216d60: 0x94c20002  lhu         $v0, 0x2($a2)
    ctx->pc = 0x216d60u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x216d64: 0xa4820002  sh          $v0, 0x2($a0)
    ctx->pc = 0x216d64u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x216d68: 0x90c30004  lbu         $v1, 0x4($a2)
    ctx->pc = 0x216d68u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x216d6c: 0xa0830004  sb          $v1, 0x4($a0)
    ctx->pc = 0x216d6cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x216d70: 0x90c20005  lbu         $v0, 0x5($a2)
    ctx->pc = 0x216d70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 5)));
    // 0x216d74: 0x21023  negu        $v0, $v0
    ctx->pc = 0x216d74u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x216d78: 0xa0820005  sb          $v0, 0x5($a0)
    ctx->pc = 0x216d78u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5), (uint8_t)GPR_U32(ctx, 2));
label_216d7c:
    // 0x216d7c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x216d7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216d80: 0x8d020260  lw          $v0, 0x260($t0)
    ctx->pc = 0x216d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 608)));
label_216d84:
    // 0x216d84: 0x1224821  addu        $t1, $t1, $v0
    ctx->pc = 0x216d84u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
label_216d88:
    // 0x216d88: 0x1120000d  beqz        $t1, . + 4 + (0xD << 2)
    ctx->pc = 0x216D88u;
    {
        const bool branch_taken_0x216d88 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x216d88) {
            ctx->pc = 0x216DC0u;
            goto label_216dc0;
        }
    }
    ctx->pc = 0x216D90u;
    // 0x216d90: 0x8d030264  lw          $v1, 0x264($t0)
    ctx->pc = 0x216d90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 612)));
    // 0x216d94: 0x9104025c  lbu         $a0, 0x25C($t0)
    ctx->pc = 0x216d94u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 604)));
    // 0x216d98: 0x1231821  addu        $v1, $t1, $v1
    ctx->pc = 0x216d98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x216d9c: 0x91250000  lbu         $a1, 0x0($t1)
    ctx->pc = 0x216d9cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x216da0: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x216da0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x216da4: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x216da4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x216da8: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x216da8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x216dac: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x216dacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x216db0: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x216db0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x216db4: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x216db4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x216db8: 0x14a0ffb1  bnez        $a1, . + 4 + (-0x4F << 2)
    ctx->pc = 0x216DB8u;
    {
        const bool branch_taken_0x216db8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x216DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216DB8u;
        // 0x216dbc: 0x2ca20005  sltiu       $v0, $a1, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x216db8) {
            ctx->pc = 0x216C80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_216c80;
        }
    }
    ctx->pc = 0x216DC0u;
label_216dc0:
    // 0x216dc0: 0x3e00008  jr          $ra
    ctx->pc = 0x216DC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x216DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216DC0u;
        // 0x216dc4: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x216DC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x216DC8u;
}
