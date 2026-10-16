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

// Function: sub_00312AE0
// Address: 0x312ae0 - 0x312c28
void sub_00312AE0_0x312ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00312AE0_0x312ae0");
#endif

    switch (ctx->pc) {
        case 0x312b60u: goto label_312b60;
        case 0x312be4u: goto label_312be4;
        case 0x312c04u: goto label_312c04;
        default: break;
    }

    ctx->pc = 0x312ae0u;

    // 0x312ae0: 0x30820007  andi        $v0, $a0, 0x7
    ctx->pc = 0x312ae0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
    // 0x312ae4: 0x14400047  bnez        $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x312AE4u;
    {
        const bool branch_taken_0x312ae4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x312AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312AE4u;
        // 0x312ae8: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312ae4) {
            ctx->pc = 0x312C04u;
            goto label_312c04;
        }
    }
    ctx->pc = 0x312AECu;
    // 0x312aec: 0x3083000f  andi        $v1, $a0, 0xF
    ctx->pc = 0x312aecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x312af0: 0x34028080  ori         $v0, $zero, 0x8080
    ctx->pc = 0x312af0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x312af4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x312af4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x312af8: 0x34428080  ori         $v0, $v0, 0x8080
    ctx->pc = 0x312af8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x312afc: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x312afcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x312b00: 0x34428080  ori         $v0, $v0, 0x8080
    ctx->pc = 0x312b00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x312b04: 0x21278  dsll        $v0, $v0, 9
    ctx->pc = 0x312b04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 9);
    // 0x312b08: 0x34420101  ori         $v0, $v0, 0x101
    ctx->pc = 0x312b08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)257);
    // 0x312b0c: 0x1460001f  bnez        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x312B0Cu;
    {
        const bool branch_taken_0x312b0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x312B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312B0Cu;
        // 0x312b10: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312b0c) {
            ctx->pc = 0x312B8Cu;
            goto label_312b8c;
        }
    }
    ctx->pc = 0x312B14u;
    // 0x312b14: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x312b14u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x312b18: 0x70424389  pcpyld      $t0, $v0, $v0
    ctx->pc = 0x312b18u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 2)));
    // 0x312b1c: 0x34048080  ori         $a0, $zero, 0x8080
    ctx->pc = 0x312b1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x312b20: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x312b20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x312b24: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x312b24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x312b28: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x312b28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x312b2c: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x312b2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x312b30: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x312b30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x312b34: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x312b34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x312b38: 0x70681248  psubb       $v0, $v1, $t0
    ctx->pc = 0x312b38u;
    SET_GPR_VEC(ctx, 2, PS2_PSUBB(GPR_VEC(ctx, 3), GPR_VEC(ctx, 8)));
    // 0x312b3c: 0x70031ce9  pnor        $v1, $zero, $v1
    ctx->pc = 0x312b3cu;
    SET_GPR_VEC(ctx, 3, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x312b40: 0x70844b89  pcpyld      $t1, $a0, $a0
    ctx->pc = 0x312b40u;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 4)));
    // 0x312b44: 0x70431489  pand        $v0, $v0, $v1
    ctx->pc = 0x312b44u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x312b48: 0x70491489  pand        $v0, $v0, $t1
    ctx->pc = 0x312b48u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 9)));
    // 0x312b4c: 0x70481ba9  pcpyud      $v1, $v0, $t0
    ctx->pc = 0x312b4cu;
    SET_GPR_VEC(ctx, 3, _mm_unpackhi_epi64(GPR_VEC(ctx, 2), GPR_VEC(ctx, 8)));
    // 0x312b50: 0x623025  or          $a2, $v1, $v0
    ctx->pc = 0x312b50u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x312b54: 0x54c0002b  bnel        $a2, $zero, . + 4 + (0x2B << 2)
    ctx->pc = 0x312B54u;
    {
        const bool branch_taken_0x312b54 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x312b54) {
            ctx->pc = 0x312B58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x312B54u;
            // 0x312b58: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x312C04u;
            goto label_312c04;
        }
    }
    ctx->pc = 0x312B5Cu;
    // 0x312b5c: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x312b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_312b60:
    // 0x312b60: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x312b60u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x312b64: 0x70021ce9  pnor        $v1, $zero, $v0
    ctx->pc = 0x312b64u;
    SET_GPR_VEC(ctx, 3, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x312b68: 0x70481248  psubb       $v0, $v0, $t0
    ctx->pc = 0x312b68u;
    SET_GPR_VEC(ctx, 2, PS2_PSUBB(GPR_VEC(ctx, 2), GPR_VEC(ctx, 8)));
    // 0x312b6c: 0x70431489  pand        $v0, $v0, $v1
    ctx->pc = 0x312b6cu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x312b70: 0x70492489  pand        $a0, $v0, $t1
    ctx->pc = 0x312b70u;
    SET_GPR_VEC(ctx, 4, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 9)));
    // 0x312b74: 0x70861ba9  pcpyud      $v1, $a0, $a2
    ctx->pc = 0x312b74u;
    SET_GPR_VEC(ctx, 3, _mm_unpackhi_epi64(GPR_VEC(ctx, 4), GPR_VEC(ctx, 6)));
    // 0x312b78: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x312b78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x312b7c: 0x5060fff8  beql        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x312B7Cu;
    {
        const bool branch_taken_0x312b7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x312b7c) {
            ctx->pc = 0x312B80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x312B7Cu;
            // 0x312b80: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x312B60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_312b60;
        }
    }
    ctx->pc = 0x312B84u;
    // 0x312b84: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x312B84u;
    {
        const bool branch_taken_0x312b84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x312B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312B84u;
        // 0x312b88: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312b84) {
            ctx->pc = 0x312C04u;
            goto label_312c04;
        }
    }
    ctx->pc = 0x312B8Cu;
label_312b8c:
    // 0x312b8c: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x312b8cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x312b90: 0x34048080  ori         $a0, $zero, 0x8080
    ctx->pc = 0x312b90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x312b94: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x312b94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x312b98: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x312b98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x312b9c: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x312b9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x312ba0: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x312ba0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x312ba4: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x312ba4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x312ba8: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x312ba8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x312bac: 0x62102f  dsubu       $v0, $v1, $v0
    ctx->pc = 0x312bacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) - GPR_U64(ctx, 2));
    // 0x312bb0: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x312bb0u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x312bb4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x312bb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x312bb8: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x312bb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x312bbc: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x312BBCu;
    {
        const bool branch_taken_0x312bbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x312bbc) {
            ctx->pc = 0x312BC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x312BBCu;
            // 0x312bc0: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x312C04u;
            goto label_312c04;
        }
    }
    ctx->pc = 0x312BC4u;
    // 0x312bc4: 0x34068080  ori         $a2, $zero, 0x8080
    ctx->pc = 0x312bc4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x312bc8: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x312bc8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x312bcc: 0x34c68080  ori         $a2, $a2, 0x8080
    ctx->pc = 0x312bccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32896);
    // 0x312bd0: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x312bd0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x312bd4: 0x34c68080  ori         $a2, $a2, 0x8080
    ctx->pc = 0x312bd4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32896);
    // 0x312bd8: 0x63278  dsll        $a2, $a2, 9
    ctx->pc = 0x312bd8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 9);
    // 0x312bdc: 0x34c60101  ori         $a2, $a2, 0x101
    ctx->pc = 0x312bdcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)257);
    // 0x312be0: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x312be0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_312be4:
    // 0x312be4: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x312be4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x312be8: 0x21827  nor         $v1, $zero, $v0
    ctx->pc = 0x312be8u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x312bec: 0x46102f  dsubu       $v0, $v0, $a2
    ctx->pc = 0x312becu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 6));
    // 0x312bf0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x312bf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x312bf4: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x312bf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x312bf8: 0x5040fffa  beql        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x312BF8u;
    {
        const bool branch_taken_0x312bf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x312bf8) {
            ctx->pc = 0x312BFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x312BF8u;
            // 0x312bfc: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x312BE4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_312be4;
        }
    }
    ctx->pc = 0x312C00u;
    // 0x312c00: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x312c00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_312c04:
    // 0x312c04: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x312c04u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x312c08: 0x0  nop
    ctx->pc = 0x312c08u;
    // NOP
    // 0x312c0c: 0x0  nop
    ctx->pc = 0x312c0cu;
    // NOP
    // 0x312c10: 0x0  nop
    ctx->pc = 0x312c10u;
    // NOP
    // 0x312c14: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x312C14u;
    {
        const bool branch_taken_0x312c14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x312c14) {
            ctx->pc = 0x312C18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x312C14u;
            // 0x312c18: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x312C04u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_312c04;
        }
    }
    ctx->pc = 0x312C1Cu;
    // 0x312c1c: 0x3e00008  jr          $ra
    ctx->pc = 0x312C1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x312C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312C1Cu;
        // 0x312c20: 0x871023  subu        $v0, $a0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x312C1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x312C24u;
    // 0x312c24: 0x0  nop
    ctx->pc = 0x312c24u;
    // NOP
    ctx->pc = 0x312c28u;
}
