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

// Function: sub_00312278
// Address: 0x312278 - 0x312364
void sub_00312278_0x312278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00312278_0x312278");
#endif

    switch (ctx->pc) {
        case 0x3122e0u: goto label_3122e0;
        case 0x31233cu: goto label_31233c;
        default: break;
    }

    ctx->pc = 0x312278u;

    // 0x312278: 0x2cc20010  sltiu       $v0, $a2, 0x10
    ctx->pc = 0x312278u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x31227c: 0x14400028  bnez        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x31227Cu;
    {
        const bool branch_taken_0x31227c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x312280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31227Cu;
        // 0x312280: 0x30a500ff  andi        $a1, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31227c) {
            ctx->pc = 0x312320u;
            goto label_312320;
        }
    }
    ctx->pc = 0x312284u;
    // 0x312284: 0x3082000f  andi        $v0, $a0, 0xF
    ctx->pc = 0x312284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x312288: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x312288u;
    {
        const bool branch_taken_0x312288 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31228Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312288u;
        // 0x31228c: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312288) {
            ctx->pc = 0x312320u;
            goto label_312320;
        }
    }
    ctx->pc = 0x312290u;
    // 0x312290: 0x51a38  dsll        $v1, $a1, 8
    ctx->pc = 0x312290u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << 8);
    // 0x312294: 0x34028080  ori         $v0, $zero, 0x8080
    ctx->pc = 0x312294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x312298: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x312298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x31229c: 0x34428080  ori         $v0, $v0, 0x8080
    ctx->pc = 0x31229cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x3122a0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x3122a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x3122a4: 0x34428080  ori         $v0, $v0, 0x8080
    ctx->pc = 0x3122a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x3122a8: 0x21278  dsll        $v0, $v0, 9
    ctx->pc = 0x3122a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 9);
    // 0x3122ac: 0x34420101  ori         $v0, $v0, 0x101
    ctx->pc = 0x3122acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)257);
    // 0x3122b0: 0x65502d  daddu       $t2, $v1, $a1
    ctx->pc = 0x3122b0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 5));
    // 0x3122b4: 0x34038080  ori         $v1, $zero, 0x8080
    ctx->pc = 0x3122b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x3122b8: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x3122b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x3122bc: 0x34638080  ori         $v1, $v1, 0x8080
    ctx->pc = 0x3122bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32896);
    // 0x3122c0: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x3122c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x3122c4: 0x34638080  ori         $v1, $v1, 0x8080
    ctx->pc = 0x3122c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32896);
    // 0x3122c8: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x3122c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x3122cc: 0x34638080  ori         $v1, $v1, 0x8080
    ctx->pc = 0x3122ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32896);
    // 0x3122d0: 0x700a46e9  pcpyh       $t0, $t2
    ctx->pc = 0x3122d0u;
    { __m128i src = GPR_VEC(ctx, 10); uint16_t l = _mm_extract_epi16(src, 0); uint16_t h = _mm_extract_epi16(src, 4); 
   SET_GPR_VEC(ctx, 8, _mm_set_epi16(h,h,h,h, l,l,l,l)); }
    // 0x3122d4: 0x71084b89  pcpyld      $t1, $t0, $t0
    ctx->pc = 0x3122d4u;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8)));
    // 0x3122d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3122d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3122dc: 0x70634389  pcpyld      $t0, $v1, $v1
    ctx->pc = 0x3122dcu;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 3)));
label_3122e0:
    // 0x3122e0: 0x78e20000  lq          $v0, 0x0($a3)
    ctx->pc = 0x3122e0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3122e4: 0x704914c9  pxor        $v0, $v0, $t1
    ctx->pc = 0x3122e4u;
    SET_GPR_VEC(ctx, 2, PS2_PXOR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 9)));
    // 0x3122e8: 0x70845389  pcpyld      $t2, $a0, $a0
    ctx->pc = 0x3122e8u;
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 4)));
    // 0x3122ec: 0x70021ce9  pnor        $v1, $zero, $v0
    ctx->pc = 0x3122ecu;
    SET_GPR_VEC(ctx, 3, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x3122f0: 0x704a1248  psubb       $v0, $v0, $t2
    ctx->pc = 0x3122f0u;
    SET_GPR_VEC(ctx, 2, PS2_PSUBB(GPR_VEC(ctx, 2), GPR_VEC(ctx, 10)));
    // 0x3122f4: 0x70431489  pand        $v0, $v0, $v1
    ctx->pc = 0x3122f4u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x3122f8: 0x70481489  pand        $v0, $v0, $t0
    ctx->pc = 0x3122f8u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 8)));
    // 0x3122fc: 0x70491ba9  pcpyud      $v1, $v0, $t1
    ctx->pc = 0x3122fcu;
    SET_GPR_VEC(ctx, 3, _mm_unpackhi_epi64(GPR_VEC(ctx, 2), GPR_VEC(ctx, 9)));
    // 0x312300: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x312300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x312304: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x312304u;
    {
        const bool branch_taken_0x312304 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x312304) {
            ctx->pc = 0x312308u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x312304u;
            // 0x312308: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x312320u;
            goto label_312320;
        }
    }
    ctx->pc = 0x31230Cu;
    // 0x31230c: 0x24c6fff0  addiu       $a2, $a2, -0x10
    ctx->pc = 0x31230cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
    // 0x312310: 0x2cc20010  sltiu       $v0, $a2, 0x10
    ctx->pc = 0x312310u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x312314: 0x1040fff2  beqz        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x312314u;
    {
        const bool branch_taken_0x312314 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x312318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312314u;
        // 0x312318: 0x24e70010  addiu       $a3, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312314) {
            ctx->pc = 0x3122E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3122e0;
        }
    }
    ctx->pc = 0x31231Cu;
    // 0x31231c: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x31231cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_312320:
    // 0x312320: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x312320u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x312324: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x312324u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x312328: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x312328u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x31232c: 0x10c20009  beq         $a2, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x31232Cu;
    {
        const bool branch_taken_0x31232c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x31232c) {
            ctx->pc = 0x312354u;
            goto label_312354;
        }
    }
    ctx->pc = 0x312334u;
    // 0x312334: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x312334u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x312338: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x312338u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_31233c:
    // 0x31233c: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x31233cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x312340: 0x10450006  beq         $v0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x312340u;
    {
        const bool branch_taken_0x312340 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x312344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312340u;
        // 0x312344: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312340) {
            ctx->pc = 0x31235Cu;
            goto label_31235c;
        }
    }
    ctx->pc = 0x312348u;
    // 0x312348: 0x0  nop
    ctx->pc = 0x312348u;
    // NOP
    // 0x31234c: 0x14c3fffb  bne         $a2, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x31234Cu;
    {
        const bool branch_taken_0x31234c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x312350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31234Cu;
        // 0x312350: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31234c) {
            ctx->pc = 0x31233Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31233c;
        }
    }
    ctx->pc = 0x312354u;
label_312354:
    // 0x312354: 0x3e00008  jr          $ra
    ctx->pc = 0x312354u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x312358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312354u;
        // 0x312358: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x312354u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31235Cu;
label_31235c:
    // 0x31235c: 0x3e00008  jr          $ra
    ctx->pc = 0x31235Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x312360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31235Cu;
        // 0x312360: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31235Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x312364u;
}
