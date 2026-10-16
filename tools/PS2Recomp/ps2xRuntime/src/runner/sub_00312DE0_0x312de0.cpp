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

// Function: sub_00312DE0
// Address: 0x312de0 - 0x312fa8
void sub_00312DE0_0x312de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00312DE0_0x312de0");
#endif

    switch (ctx->pc) {
        case 0x312de8u: goto label_312de8;
        case 0x312e74u: goto label_312e74;
        case 0x312f10u: goto label_312f10;
        case 0x312f70u: goto label_312f70;
        default: break;
    }

    ctx->pc = 0x312de0u;

    // 0x312de0: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x312DE0u;
    {
        const bool branch_taken_0x312de0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x312DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312DE0u;
        // 0x312de4: 0x851825  or          $v1, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312de0) {
            ctx->pc = 0x312DF0u;
            goto label_312df0;
        }
    }
    ctx->pc = 0x312DE8u;
label_312de8:
    // 0x312de8: 0x3e00008  jr          $ra
    ctx->pc = 0x312DE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x312DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312DE8u;
        // 0x312dec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x312DE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x312DF0u;
label_312df0:
    // 0x312df0: 0x30620007  andi        $v0, $v1, 0x7
    ctx->pc = 0x312df0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x312df4: 0x14400059  bnez        $v0, . + 4 + (0x59 << 2)
    ctx->pc = 0x312DF4u;
    {
        const bool branch_taken_0x312df4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x312DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312DF4u;
        // 0x312df8: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312df4) {
            ctx->pc = 0x312F5Cu;
            goto label_312f5c;
        }
    }
    ctx->pc = 0x312DFCu;
    // 0x312dfc: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x312dfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x312e00: 0x2cc70010  sltiu       $a3, $a2, 0x10
    ctx->pc = 0x312e00u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x312e04: 0x34098080  ori         $t1, $zero, 0x8080
    ctx->pc = 0x312e04u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x312e08: 0x94c38  dsll        $t1, $t1, 16
    ctx->pc = 0x312e08u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 16);
    // 0x312e0c: 0x35298080  ori         $t1, $t1, 0x8080
    ctx->pc = 0x312e0cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)32896);
    // 0x312e10: 0x94c38  dsll        $t1, $t1, 16
    ctx->pc = 0x312e10u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 16);
    // 0x312e14: 0x35298080  ori         $t1, $t1, 0x8080
    ctx->pc = 0x312e14u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)32896);
    // 0x312e18: 0x94a78  dsll        $t1, $t1, 9
    ctx->pc = 0x312e18u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 9);
    // 0x312e1c: 0x35290101  ori         $t1, $t1, 0x101
    ctx->pc = 0x312e1cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)257);
    // 0x312e20: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x312e20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x312e24: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x312E24u;
    {
        const bool branch_taken_0x312e24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x312E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312E24u;
        // 0x312e28: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312e24) {
            ctx->pc = 0x312ED0u;
            goto label_312ed0;
        }
    }
    ctx->pc = 0x312E2Cu;
    // 0x312e2c: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x312e2cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x312e30: 0x71295389  pcpyld      $t2, $t1, $t1
    ctx->pc = 0x312e30u;
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 9)));
    // 0x312e34: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x312e34u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x312e38: 0x34088080  ori         $t0, $zero, 0x8080
    ctx->pc = 0x312e38u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x312e3c: 0x84438  dsll        $t0, $t0, 16
    ctx->pc = 0x312e3cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 16);
    // 0x312e40: 0x35088080  ori         $t0, $t0, 0x8080
    ctx->pc = 0x312e40u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32896);
    // 0x312e44: 0x84438  dsll        $t0, $t0, 16
    ctx->pc = 0x312e44u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 16);
    // 0x312e48: 0x35088080  ori         $t0, $t0, 0x8080
    ctx->pc = 0x312e48u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32896);
    // 0x312e4c: 0x84438  dsll        $t0, $t0, 16
    ctx->pc = 0x312e4cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 16);
    // 0x312e50: 0x35088080  ori         $t0, $t0, 0x8080
    ctx->pc = 0x312e50u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32896);
    // 0x312e54: 0x70621848  psubw       $v1, $v1, $v0
    ctx->pc = 0x312e54u;
    SET_GPR_VEC(ctx, 3, PS2_PSUBW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x312e58: 0x71084b89  pcpyld      $t1, $t0, $t0
    ctx->pc = 0x312e58u;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8)));
    // 0x312e5c: 0x706413a9  pcpyud      $v0, $v1, $a0
    ctx->pc = 0x312e5cu;
    SET_GPR_VEC(ctx, 2, _mm_unpackhi_epi64(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x312e60: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x312e60u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312e64: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x312e64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x312e68: 0x1460003c  bnez        $v1, . + 4 + (0x3C << 2)
    ctx->pc = 0x312E68u;
    {
        const bool branch_taken_0x312e68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x312E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312E68u;
        // 0x312e6c: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312e68) {
            ctx->pc = 0x312F5Cu;
            goto label_312f5c;
        }
    }
    ctx->pc = 0x312E70u;
    // 0x312e70: 0x24c6fff0  addiu       $a2, $a2, -0x10
    ctx->pc = 0x312e70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
label_312e74:
    // 0x312e74: 0x10c0ffdc  beqz        $a2, . + 4 + (-0x24 << 2)
    ctx->pc = 0x312E74u;
    {
        const bool branch_taken_0x312e74 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x312e74) {
            ctx->pc = 0x312DE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_312de8;
        }
    }
    ctx->pc = 0x312E7Cu;
    // 0x312e7c: 0x78e20000  lq          $v0, 0x0($a3)
    ctx->pc = 0x312e7cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x312e80: 0x70021ce9  pnor        $v1, $zero, $v0
    ctx->pc = 0x312e80u;
    SET_GPR_VEC(ctx, 3, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x312e84: 0x704a1248  psubb       $v0, $v0, $t2
    ctx->pc = 0x312e84u;
    SET_GPR_VEC(ctx, 2, PS2_PSUBB(GPR_VEC(ctx, 2), GPR_VEC(ctx, 10)));
    // 0x312e88: 0x70431489  pand        $v0, $v0, $v1
    ctx->pc = 0x312e88u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x312e8c: 0x70491c89  pand        $v1, $v0, $t1
    ctx->pc = 0x312e8cu;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 9)));
    // 0x312e90: 0x706413a9  pcpyud      $v0, $v1, $a0
    ctx->pc = 0x312e90u;
    SET_GPR_VEC(ctx, 2, _mm_unpackhi_epi64(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x312e94: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x312e94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x312e98: 0x1440ffd3  bnez        $v0, . + 4 + (-0x2D << 2)
    ctx->pc = 0x312E98u;
    {
        const bool branch_taken_0x312e98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x312E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312E98u;
        // 0x312e9c: 0x24e70010  addiu       $a3, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312e98) {
            ctx->pc = 0x312DE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_312de8;
        }
    }
    ctx->pc = 0x312EA0u;
    // 0x312ea0: 0x2cc20010  sltiu       $v0, $a2, 0x10
    ctx->pc = 0x312ea0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x312ea4: 0x78e30000  lq          $v1, 0x0($a3)
    ctx->pc = 0x312ea4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x312ea8: 0x14400029  bnez        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x312EA8u;
    {
        const bool branch_taken_0x312ea8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x312EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312EA8u;
        // 0x312eac: 0x25080010  addiu       $t0, $t0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312ea8) {
            ctx->pc = 0x312F50u;
            goto label_312f50;
        }
    }
    ctx->pc = 0x312EB0u;
    // 0x312eb0: 0x79020000  lq          $v0, 0x0($t0)
    ctx->pc = 0x312eb0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x312eb4: 0x70621848  psubw       $v1, $v1, $v0
    ctx->pc = 0x312eb4u;
    SET_GPR_VEC(ctx, 3, PS2_PSUBW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x312eb8: 0x706413a9  pcpyud      $v0, $v1, $a0
    ctx->pc = 0x312eb8u;
    SET_GPR_VEC(ctx, 2, _mm_unpackhi_epi64(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x312ebc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x312ebcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x312ec0: 0x5040ffec  beql        $v0, $zero, . + 4 + (-0x14 << 2)
    ctx->pc = 0x312EC0u;
    {
        const bool branch_taken_0x312ec0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x312ec0) {
            ctx->pc = 0x312EC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x312EC0u;
            // 0x312ec4: 0x24c6fff0  addiu       $a2, $a2, -0x10 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
            ctx->in_delay_slot = false;
            ctx->pc = 0x312E74u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_312e74;
        }
    }
    ctx->pc = 0x312EC8u;
    // 0x312ec8: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x312EC8u;
    {
        const bool branch_taken_0x312ec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x312ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312EC8u;
        // 0x312ecc: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312ec8) {
            ctx->pc = 0x312F54u;
            goto label_312f54;
        }
    }
    ctx->pc = 0x312ED0u;
label_312ed0:
    // 0x312ed0: 0x2cc20008  sltiu       $v0, $a2, 0x8
    ctx->pc = 0x312ed0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x312ed4: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x312ED4u;
    {
        const bool branch_taken_0x312ed4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x312ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312ED4u;
        // 0x312ed8: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312ed4) {
            ctx->pc = 0x312F50u;
            goto label_312f50;
        }
    }
    ctx->pc = 0x312EDCu;
    // 0x312edc: 0xdc830000  ld          $v1, 0x0($a0)
    ctx->pc = 0x312edcu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x312ee0: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x312ee0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x312ee4: 0x1462001d  bne         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x312EE4u;
    {
        const bool branch_taken_0x312ee4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x312EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312EE4u;
        // 0x312ee8: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312ee4) {
            ctx->pc = 0x312F5Cu;
            goto label_312f5c;
        }
    }
    ctx->pc = 0x312EECu;
    // 0x312eec: 0x24c6fff8  addiu       $a2, $a2, -0x8
    ctx->pc = 0x312eecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
    // 0x312ef0: 0x340a8080  ori         $t2, $zero, 0x8080
    ctx->pc = 0x312ef0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x312ef4: 0xa5438  dsll        $t2, $t2, 16
    ctx->pc = 0x312ef4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 16);
    // 0x312ef8: 0x354a8080  ori         $t2, $t2, 0x8080
    ctx->pc = 0x312ef8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)32896);
    // 0x312efc: 0xa5438  dsll        $t2, $t2, 16
    ctx->pc = 0x312efcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 16);
    // 0x312f00: 0x354a8080  ori         $t2, $t2, 0x8080
    ctx->pc = 0x312f00u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)32896);
    // 0x312f04: 0xa5438  dsll        $t2, $t2, 16
    ctx->pc = 0x312f04u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 16);
    // 0x312f08: 0x354a8080  ori         $t2, $t2, 0x8080
    ctx->pc = 0x312f08u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)32896);
    // 0x312f0c: 0x0  nop
    ctx->pc = 0x312f0cu;
    // NOP
label_312f10:
    // 0x312f10: 0x10c0ffb5  beqz        $a2, . + 4 + (-0x4B << 2)
    ctx->pc = 0x312F10u;
    {
        const bool branch_taken_0x312f10 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x312f10) {
            ctx->pc = 0x312DE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_312de8;
        }
    }
    ctx->pc = 0x312F18u;
    // 0x312f18: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x312f18u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x312f1c: 0x21827  nor         $v1, $zero, $v0
    ctx->pc = 0x312f1cu;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x312f20: 0x49102f  dsubu       $v0, $v0, $t1
    ctx->pc = 0x312f20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 9));
    // 0x312f24: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x312f24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x312f28: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x312f28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x312f2c: 0x1440ffae  bnez        $v0, . + 4 + (-0x52 << 2)
    ctx->pc = 0x312F2Cu;
    {
        const bool branch_taken_0x312f2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x312F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312F2Cu;
        // 0x312f30: 0x24e70008  addiu       $a3, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312f2c) {
            ctx->pc = 0x312DE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_312de8;
        }
    }
    ctx->pc = 0x312F34u;
    // 0x312f34: 0x2cc20008  sltiu       $v0, $a2, 0x8
    ctx->pc = 0x312f34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x312f38: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x312F38u;
    {
        const bool branch_taken_0x312f38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x312F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312F38u;
        // 0x312f3c: 0x25080008  addiu       $t0, $t0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312f38) {
            ctx->pc = 0x312F50u;
            goto label_312f50;
        }
    }
    ctx->pc = 0x312F40u;
    // 0x312f40: 0xdce30000  ld          $v1, 0x0($a3)
    ctx->pc = 0x312f40u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x312f44: 0xdd020000  ld          $v0, 0x0($t0)
    ctx->pc = 0x312f44u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x312f48: 0x5062fff1  beql        $v1, $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x312F48u;
    {
        const bool branch_taken_0x312f48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x312f48) {
            ctx->pc = 0x312F4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x312F48u;
            // 0x312f4c: 0x24c6fff8  addiu       $a2, $a2, -0x8 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
            ctx->in_delay_slot = false;
            ctx->pc = 0x312F10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_312f10;
        }
    }
    ctx->pc = 0x312F50u;
label_312f50:
    // 0x312f50: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x312f50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_312f54:
    // 0x312f54: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x312f54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312f58: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x312f58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_312f5c:
    // 0x312f5c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x312F5Cu;
    {
        const bool branch_taken_0x312f5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x312F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312F5Cu;
        // 0x312f60: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312f5c) {
            ctx->pc = 0x312F98u;
            goto label_312f98;
        }
    }
    ctx->pc = 0x312F64u;
    // 0x312f64: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x312F64u;
    {
        const bool branch_taken_0x312f64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x312F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312F64u;
        // 0x312f68: 0x80830000  lb          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312f64) {
            ctx->pc = 0x312F8Cu;
            goto label_312f8c;
        }
    }
    ctx->pc = 0x312F6Cu;
    // 0x312f6c: 0x0  nop
    ctx->pc = 0x312f6cu;
    // NOP
label_312f70:
    // 0x312f70: 0x10c0ff9d  beqz        $a2, . + 4 + (-0x63 << 2)
    ctx->pc = 0x312F70u;
    {
        const bool branch_taken_0x312f70 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x312f70) {
            ctx->pc = 0x312DE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_312de8;
        }
    }
    ctx->pc = 0x312F78u;
    // 0x312f78: 0x10e0ff9b  beqz        $a3, . + 4 + (-0x65 << 2)
    ctx->pc = 0x312F78u;
    {
        const bool branch_taken_0x312f78 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x312F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312F78u;
        // 0x312f7c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312f78) {
            ctx->pc = 0x312DE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_312de8;
        }
    }
    ctx->pc = 0x312F80u;
    // 0x312f80: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x312f80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x312f84: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x312f84u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x312f88: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x312f88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_312f8c:
    // 0x312f8c: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x312f8cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x312f90: 0x1062fff7  beq         $v1, $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x312F90u;
    {
        const bool branch_taken_0x312f90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x312F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312F90u;
        // 0x312f94: 0x90870000  lbu         $a3, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312f90) {
            ctx->pc = 0x312F70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_312f70;
        }
    }
    ctx->pc = 0x312F98u;
label_312f98:
    // 0x312f98: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x312f98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x312f9c: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x312f9cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x312fa0: 0x3e00008  jr          $ra
    ctx->pc = 0x312FA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x312FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312FA0u;
        // 0x312fa4: 0x621023  subu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x312FA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x312FA8u;
}
