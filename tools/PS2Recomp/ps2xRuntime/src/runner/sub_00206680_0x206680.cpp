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

// Function: sub_00206680
// Address: 0x206680 - 0x206868
void sub_00206680_0x206680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00206680_0x206680");
#endif

    switch (ctx->pc) {
        case 0x2066d8u: goto label_2066d8;
        case 0x206700u: goto label_206700;
        case 0x206770u: goto label_206770;
        case 0x2067b8u: goto label_2067b8;
        default: break;
    }

    ctx->pc = 0x206680u;

    // 0x206680: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x206680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x206684: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x206684u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x206688: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x206688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x20668c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x20668cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206690: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x206690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x206694: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x206694u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206698: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x206698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x20669c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x20669cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2066a0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2066a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x2066a4: 0x16600005  bnez        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x2066A4u;
    {
        const bool branch_taken_0x2066a4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x2066A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2066A4u;
        // 0x2066a8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2066a4) {
            ctx->pc = 0x2066BCu;
            goto label_2066bc;
        }
    }
    ctx->pc = 0x2066ACu;
    // 0x2066ac: 0x8e432030  lw          $v1, 0x2030($s2)
    ctx->pc = 0x2066acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8240)));
    // 0x2066b0: 0x8e422010  lw          $v0, 0x2010($s2)
    ctx->pc = 0x2066b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8208)));
    // 0x2066b4: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x2066B4u;
    {
        const bool branch_taken_0x2066b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2066B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2066B4u;
        // 0x2066b8: 0x432023  subu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2066b4) {
            ctx->pc = 0x206844u;
            goto label_206844;
        }
    }
    ctx->pc = 0x2066BCu;
label_2066bc:
    // 0x2066bc: 0x8e432010  lw          $v1, 0x2010($s2)
    ctx->pc = 0x2066bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8208)));
    // 0x2066c0: 0xde422030  ld          $v0, 0x2030($s2)
    ctx->pc = 0x2066c0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 8240)));
    // 0x2066c4: 0xae452028  sw          $a1, 0x2028($s2)
    ctx->pc = 0x2066c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8232), GPR_U32(ctx, 5));
    // 0x2066c8: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x2066c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2066cc: 0x10400059  beqz        $v0, . + 4 + (0x59 << 2)
    ctx->pc = 0x2066CCu;
    {
        const bool branch_taken_0x2066cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2066D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2066CCu;
        // 0x2066d0: 0xae53202c  sw          $s3, 0x202C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8236), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2066cc) {
            ctx->pc = 0x206834u;
            goto label_206834;
        }
    }
    ctx->pc = 0x2066D4u;
    // 0x2066d4: 0x8e442008  lw          $a0, 0x2008($s2)
    ctx->pc = 0x2066d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8200)));
label_2066d8:
    // 0x2066d8: 0x28821000  slti        $v0, $a0, 0x1000
    ctx->pc = 0x2066d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4096) ? 1 : 0);
    // 0x2066dc: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x2066DCu;
    {
        const bool branch_taken_0x2066dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2066dc) {
            ctx->pc = 0x2066E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2066DCu;
            // 0x2066e0: 0x8e42200c  lw          $v0, 0x200C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8204)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x206724u;
            goto label_206724;
        }
    }
    ctx->pc = 0x2066E4u;
    // 0x2066e4: 0x8e43200c  lw          $v1, 0x200C($s2)
    ctx->pc = 0x2066e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8204)));
    // 0x2066e8: 0x1860000d  blez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2066E8u;
    {
        const bool branch_taken_0x2066e8 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x2066ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2066E8u;
        // 0x2066ec: 0x24820008  addiu       $v0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2066e8) {
            ctx->pc = 0x206720u;
            goto label_206720;
        }
    }
    ctx->pc = 0x2066F0u;
    // 0x2066f0: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x2066f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2066f4: 0x2422021  addu        $a0, $s2, $v0
    ctx->pc = 0x2066f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2066f8: 0x26430008  addiu       $v1, $s2, 0x8
    ctx->pc = 0x2066f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x2066fc: 0x26502018  addiu       $s0, $s2, 0x2018
    ctx->pc = 0x2066fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 8216));
label_206700:
    // 0x206700: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x206700u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x206704: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x206704u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x206708: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x206708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x20670c: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x20670cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x206710: 0x1ca0fffb  bgtz        $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x206710u;
    {
        const bool branch_taken_0x206710 = (GPR_S64(ctx, 5) > 0);
        ctx->pc = 0x206714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206710u;
        // 0x206714: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206710) {
            ctx->pc = 0x206700u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_206700;
        }
    }
    ctx->pc = 0x206718u;
    // 0x206718: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x206718u;
    {
        const bool branch_taken_0x206718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20671Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206718u;
        // 0x20671c: 0xae402008  sw          $zero, 0x2008($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8200), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206718) {
            ctx->pc = 0x206730u;
            goto label_206730;
        }
    }
    ctx->pc = 0x206720u;
label_206720:
    // 0x206720: 0x8e42200c  lw          $v0, 0x200C($s2)
    ctx->pc = 0x206720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8204)));
label_206724:
    // 0x206724: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x206724u;
    {
        const bool branch_taken_0x206724 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x206728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206724u;
        // 0x206728: 0x26502018  addiu       $s0, $s2, 0x2018 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 8216));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206724) {
            ctx->pc = 0x206730u;
            goto label_206730;
        }
    }
    ctx->pc = 0x20672Cu;
    // 0x20672c: 0xae402008  sw          $zero, 0x2008($s2)
    ctx->pc = 0x20672cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8200), GPR_U32(ctx, 0));
label_206730:
    // 0x206730: 0x8e422008  lw          $v0, 0x2008($s2)
    ctx->pc = 0x206730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8200)));
    // 0x206734: 0x24042000  addiu       $a0, $zero, 0x2000
    ctx->pc = 0x206734u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x206738: 0x8e43200c  lw          $v1, 0x200C($s2)
    ctx->pc = 0x206738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8204)));
    // 0x20673c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x20673cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x206740: 0x833023  subu        $a2, $a0, $v1
    ctx->pc = 0x206740u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x206744: 0x28c21000  slti        $v0, $a2, 0x1000
    ctx->pc = 0x206744u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4096) ? 1 : 0);
    // 0x206748: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x206748u;
    {
        const bool branch_taken_0x206748 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x206748) {
            ctx->pc = 0x20674Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x206748u;
            // 0x20674c: 0x8e422008  lw          $v0, 0x2008($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8200)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20678Cu;
            goto label_20678c;
        }
    }
    ctx->pc = 0x206750u;
    // 0x206750: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x206750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x206754: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x206754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x206758: 0x46202a  slt         $a0, $v0, $a2
    ctx->pc = 0x206758u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x20675c: 0x44300b  movn        $a2, $v0, $a0
    ctx->pc = 0x20675cu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2));
    // 0x206760: 0x18c00009  blez        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x206760u;
    {
        const bool branch_taken_0x206760 = (GPR_S64(ctx, 6) <= 0);
        ctx->pc = 0x206764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206760u;
        // 0x206764: 0x2432821  addu        $a1, $s2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206760) {
            ctx->pc = 0x206788u;
            goto label_206788;
        }
    }
    ctx->pc = 0x206768u;
    // 0x206768: 0xc093546  jal         func_24D518
    ctx->pc = 0x206768u;
    SET_GPR_U32(ctx, 31, 0x206770u);
    ctx->pc = 0x20676Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206768u;
    // 0x20676c: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D518u, 0x206768u, 0x206770u)) {
        return;
    }
    ctx->pc = 0x206770u;
label_206770:
    // 0x206770: 0x8e43200c  lw          $v1, 0x200C($s2)
    ctx->pc = 0x206770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8204)));
    // 0x206774: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x206774u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x206778: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x206778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20677c: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x20677cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x206780: 0xae43200c  sw          $v1, 0x200C($s2)
    ctx->pc = 0x206780u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8204), GPR_U32(ctx, 3));
    // 0x206784: 0xae440004  sw          $a0, 0x4($s2)
    ctx->pc = 0x206784u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 4));
label_206788:
    // 0x206788: 0x8e422008  lw          $v0, 0x2008($s2)
    ctx->pc = 0x206788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8200)));
label_20678c:
    // 0x20678c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20678cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206790: 0x8e51200c  lw          $s1, 0x200C($s2)
    ctx->pc = 0x206790u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8204)));
    // 0x206794: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x206794u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206798: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x206798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x20679c: 0xde502030  ld          $s0, 0x2030($s2)
    ctx->pc = 0x20679cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 18), 8240)));
    // 0x2067a0: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x2067a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2067a4: 0xae51201c  sw          $s1, 0x201C($s2)
    ctx->pc = 0x2067a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8220), GPR_U32(ctx, 17));
    // 0x2067a8: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x2067a8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
    // 0x2067ac: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x2067acu;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x2067b0: 0xc084a12  jal         func_212848
    ctx->pc = 0x2067B0u;
    SET_GPR_U32(ctx, 31, 0x2067B8u);
    ctx->pc = 0x2067B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2067B0u;
    // 0x2067b4: 0xae422018  sw          $v0, 0x2018($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 8216), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212848u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x212848u, 0x2067B0u, 0x2067B8u)) {
        return;
    }
    ctx->pc = 0x2067B8u;
label_2067b8:
    // 0x2067b8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2067b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2067bc: 0x8e43201c  lw          $v1, 0x201C($s2)
    ctx->pc = 0x2067bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8220)));
    // 0x2067c0: 0x8e422030  lw          $v0, 0x2030($s2)
    ctx->pc = 0x2067c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8240)));
    // 0x2067c4: 0x2238823  subu        $s1, $s1, $v1
    ctx->pc = 0x2067c4u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x2067c8: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x2067c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2067cc: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2067CCu;
    {
        const bool branch_taken_0x2067cc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2067D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2067CCu;
        // 0x2067d0: 0x282a021  addu        $s4, $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2067cc) {
            ctx->pc = 0x2067ECu;
            goto label_2067ec;
        }
    }
    ctx->pc = 0x2067D4u;
    // 0x2067d4: 0x8e42200c  lw          $v0, 0x200C($s2)
    ctx->pc = 0x2067d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8204)));
    // 0x2067d8: 0x8e432008  lw          $v1, 0x2008($s2)
    ctx->pc = 0x2067d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8200)));
    // 0x2067dc: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x2067dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2067e0: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x2067e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x2067e4: 0xae42200c  sw          $v0, 0x200C($s2)
    ctx->pc = 0x2067e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8204), GPR_U32(ctx, 2));
    // 0x2067e8: 0xae432008  sw          $v1, 0x2008($s2)
    ctx->pc = 0x2067e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8200), GPR_U32(ctx, 3));
label_2067ec:
    // 0x2067ec: 0x2882fffc  slti        $v0, $a0, -0x4
    ctx->pc = 0x2067ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4294967292) ? 1 : 0);
    // 0x2067f0: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2067F0u;
    {
        const bool branch_taken_0x2067f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2067f0) {
            ctx->pc = 0x2067F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2067F0u;
            // 0x2067f4: 0x8e42202c  lw          $v0, 0x202C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8236)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x206818u;
            goto label_206818;
        }
    }
    ctx->pc = 0x2067F8u;
    // 0x2067f8: 0x2882fffe  slti        $v0, $a0, -0x2
    ctx->pc = 0x2067f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4294967294) ? 1 : 0);
    // 0x2067fc: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x2067FCu;
    {
        const bool branch_taken_0x2067fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2067fc) {
            ctx->pc = 0x206800u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2067FCu;
            // 0x206800: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x206844u;
            goto label_206844;
        }
    }
    ctx->pc = 0x206804u;
    // 0x206804: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x206804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x206808: 0x54820003  bnel        $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x206808u;
    {
        const bool branch_taken_0x206808 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x206808) {
            ctx->pc = 0x20680Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x206808u;
            // 0x20680c: 0x8e42202c  lw          $v0, 0x202C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8236)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x206818u;
            goto label_206818;
        }
    }
    ctx->pc = 0x206810u;
    // 0x206810: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x206810u;
    {
        const bool branch_taken_0x206810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x206814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206810u;
        // 0x206814: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206810) {
            ctx->pc = 0x206844u;
            goto label_206844;
        }
    }
    ctx->pc = 0x206818u;
label_206818:
    // 0x206818: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x206818u;
    {
        const bool branch_taken_0x206818 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x206818) {
            ctx->pc = 0x20681Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x206818u;
            // 0x20681c: 0x8e422014  lw          $v0, 0x2014($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8212)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x206838u;
            goto label_206838;
        }
    }
    ctx->pc = 0x206820u;
    // 0x206820: 0x8e432010  lw          $v1, 0x2010($s2)
    ctx->pc = 0x206820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8208)));
    // 0x206824: 0xde422030  ld          $v0, 0x2030($s2)
    ctx->pc = 0x206824u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 8240)));
    // 0x206828: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x206828u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x20682c: 0x5440ffaa  bnel        $v0, $zero, . + 4 + (-0x56 << 2)
    ctx->pc = 0x20682Cu;
    {
        const bool branch_taken_0x20682c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20682c) {
            ctx->pc = 0x206830u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20682Cu;
            // 0x206830: 0x8e442008  lw          $a0, 0x2008($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8200)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2066D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2066d8;
        }
    }
    ctx->pc = 0x206834u;
label_206834:
    // 0x206834: 0x8e422014  lw          $v0, 0x2014($s2)
    ctx->pc = 0x206834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8212)));
label_206838:
    // 0x206838: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x206838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20683c: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x20683cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x206840: 0xae422014  sw          $v0, 0x2014($s2)
    ctx->pc = 0x206840u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8212), GPR_U32(ctx, 2));
label_206844:
    // 0x206844: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x206844u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x206848: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x206848u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20684c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x20684cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x206850: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x206850u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x206854: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x206854u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x206858: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x206858u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20685c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20685cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x206860: 0x3e00008  jr          $ra
    ctx->pc = 0x206860u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x206864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206860u;
        // 0x206864: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x206860u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x206868u;
}
