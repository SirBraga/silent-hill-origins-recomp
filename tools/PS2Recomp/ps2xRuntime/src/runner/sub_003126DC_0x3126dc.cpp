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

// Function: sub_003126DC
// Address: 0x3126dc - 0x31287c
void sub_003126DC_0x3126dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003126DC_0x3126dc");
#endif

    switch (ctx->pc) {
        case 0x312740u: goto label_312740;
        case 0x312814u: goto label_312814;
        case 0x312850u: goto label_312850;
        default: break;
    }

    ctx->pc = 0x3126dcu;

    // 0x3126dc: 0x30820007  andi        $v0, $a0, 0x7
    ctx->pc = 0x3126dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
    // 0x3126e0: 0x1440005e  bnez        $v0, . + 4 + (0x5E << 2)
    ctx->pc = 0x3126E0u;
    {
        const bool branch_taken_0x3126e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3126E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3126E0u;
        // 0x3126e4: 0x30a500ff  andi        $a1, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3126e0) {
            ctx->pc = 0x31285Cu;
            goto label_31285c;
        }
    }
    ctx->pc = 0x3126E8u;
    // 0x3126e8: 0x51a38  dsll        $v1, $a1, 8
    ctx->pc = 0x3126e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << 8);
    // 0x3126ec: 0x34068080  ori         $a2, $zero, 0x8080
    ctx->pc = 0x3126ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x3126f0: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x3126f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x3126f4: 0x34c68080  ori         $a2, $a2, 0x8080
    ctx->pc = 0x3126f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32896);
    // 0x3126f8: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x3126f8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x3126fc: 0x34c68080  ori         $a2, $a2, 0x8080
    ctx->pc = 0x3126fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32896);
    // 0x312700: 0x63278  dsll        $a2, $a2, 9
    ctx->pc = 0x312700u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 9);
    // 0x312704: 0x34c60101  ori         $a2, $a2, 0x101
    ctx->pc = 0x312704u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)257);
    // 0x312708: 0x65502d  daddu       $t2, $v1, $a1
    ctx->pc = 0x312708u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 5));
    // 0x31270c: 0x3083000f  andi        $v1, $a0, 0xF
    ctx->pc = 0x31270cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x312710: 0xa1438  dsll        $v0, $t2, 16
    ctx->pc = 0x312710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) << 16);
    // 0x312714: 0x34088080  ori         $t0, $zero, 0x8080
    ctx->pc = 0x312714u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x312718: 0x84438  dsll        $t0, $t0, 16
    ctx->pc = 0x312718u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 16);
    // 0x31271c: 0x35088080  ori         $t0, $t0, 0x8080
    ctx->pc = 0x31271cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32896);
    // 0x312720: 0x84438  dsll        $t0, $t0, 16
    ctx->pc = 0x312720u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 16);
    // 0x312724: 0x35088080  ori         $t0, $t0, 0x8080
    ctx->pc = 0x312724u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32896);
    // 0x312728: 0x84438  dsll        $t0, $t0, 16
    ctx->pc = 0x312728u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 16);
    // 0x31272c: 0x35088080  ori         $t0, $t0, 0x8080
    ctx->pc = 0x31272cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32896);
    // 0x312730: 0x4a102d  daddu       $v0, $v0, $t2
    ctx->pc = 0x312730u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 10));
    // 0x312734: 0x2503c  dsll32      $t2, $v0, 0
    ctx->pc = 0x312734u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) << (32 + 0));
    // 0x312738: 0x14600026  bnez        $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x312738u;
    {
        const bool branch_taken_0x312738 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x31273Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312738u;
        // 0x31273c: 0x4a382d  daddu       $a3, $v0, $t2 (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312738) {
            ctx->pc = 0x3127D4u;
            goto label_3127d4;
        }
    }
    ctx->pc = 0x312740u;
label_312740:
    // 0x312740: 0x78890000  lq          $t1, 0x0($a0)
    ctx->pc = 0x312740u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x312744: 0x70c65389  pcpyld      $t2, $a2, $a2
    ctx->pc = 0x312744u;
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 6)));
    // 0x312748: 0x70091ce9  pnor        $v1, $zero, $t1
    ctx->pc = 0x312748u;
    SET_GPR_VEC(ctx, 3, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 9)));
    // 0x31274c: 0x712a1248  psubb       $v0, $t1, $t2
    ctx->pc = 0x31274cu;
    SET_GPR_VEC(ctx, 2, PS2_PSUBB(GPR_VEC(ctx, 9), GPR_VEC(ctx, 10)));
    // 0x312750: 0x71083389  pcpyld      $a2, $t0, $t0
    ctx->pc = 0x312750u;
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8)));
    // 0x312754: 0x70431489  pand        $v0, $v0, $v1
    ctx->pc = 0x312754u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x312758: 0x70e74389  pcpyld      $t0, $a3, $a3
    ctx->pc = 0x312758u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 7)));
    // 0x31275c: 0x70461489  pand        $v0, $v0, $a2
    ctx->pc = 0x31275cu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 6)));
    // 0x312760: 0x70471ba9  pcpyud      $v1, $v0, $a3
    ctx->pc = 0x312760u;
    SET_GPR_VEC(ctx, 3, _mm_unpackhi_epi64(GPR_VEC(ctx, 2), GPR_VEC(ctx, 7)));
    // 0x312764: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x312764u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x312768: 0x5460003d  bnel        $v1, $zero, . + 4 + (0x3D << 2)
    ctx->pc = 0x312768u;
    {
        const bool branch_taken_0x312768 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x312768) {
            ctx->pc = 0x31276Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x312768u;
            // 0x31276c: 0x90820000  lbu         $v0, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x312860u;
            goto label_312860;
        }
    }
    ctx->pc = 0x312770u;
    // 0x312770: 0x712814c9  pxor        $v0, $t1, $t0
    ctx->pc = 0x312770u;
    SET_GPR_VEC(ctx, 2, PS2_PXOR(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x312774: 0x704a1a48  psubb       $v1, $v0, $t2
    ctx->pc = 0x312774u;
    SET_GPR_VEC(ctx, 3, PS2_PSUBB(GPR_VEC(ctx, 2), GPR_VEC(ctx, 10)));
    // 0x312778: 0x700214e9  pnor        $v0, $zero, $v0
    ctx->pc = 0x312778u;
    SET_GPR_VEC(ctx, 2, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x31277c: 0x34088080  ori         $t0, $zero, 0x8080
    ctx->pc = 0x31277cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x312780: 0x84438  dsll        $t0, $t0, 16
    ctx->pc = 0x312780u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 16);
    // 0x312784: 0x35088080  ori         $t0, $t0, 0x8080
    ctx->pc = 0x312784u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32896);
    // 0x312788: 0x84438  dsll        $t0, $t0, 16
    ctx->pc = 0x312788u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 16);
    // 0x31278c: 0x35088080  ori         $t0, $t0, 0x8080
    ctx->pc = 0x31278cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32896);
    // 0x312790: 0x84438  dsll        $t0, $t0, 16
    ctx->pc = 0x312790u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 16);
    // 0x312794: 0x35088080  ori         $t0, $t0, 0x8080
    ctx->pc = 0x312794u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32896);
    // 0x312798: 0x70621c89  pand        $v1, $v1, $v0
    ctx->pc = 0x312798u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x31279c: 0x70661c89  pand        $v1, $v1, $a2
    ctx->pc = 0x31279cu;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 6)));
    // 0x3127a0: 0x34068080  ori         $a2, $zero, 0x8080
    ctx->pc = 0x3127a0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x3127a4: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x3127a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x3127a8: 0x34c68080  ori         $a2, $a2, 0x8080
    ctx->pc = 0x3127a8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32896);
    // 0x3127ac: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x3127acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x3127b0: 0x34c68080  ori         $a2, $a2, 0x8080
    ctx->pc = 0x3127b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32896);
    // 0x3127b4: 0x63278  dsll        $a2, $a2, 9
    ctx->pc = 0x3127b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 9);
    // 0x3127b8: 0x34c60101  ori         $a2, $a2, 0x101
    ctx->pc = 0x3127b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)257);
    // 0x3127bc: 0x706513a9  pcpyud      $v0, $v1, $a1
    ctx->pc = 0x3127bcu;
    SET_GPR_VEC(ctx, 2, _mm_unpackhi_epi64(GPR_VEC(ctx, 3), GPR_VEC(ctx, 5)));
    // 0x3127c0: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x3127c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3127c4: 0x5060ffde  beql        $v1, $zero, . + 4 + (-0x22 << 2)
    ctx->pc = 0x3127C4u;
    {
        const bool branch_taken_0x3127c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3127c4) {
            ctx->pc = 0x3127C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3127C4u;
            // 0x3127c8: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x312740u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_312740;
        }
    }
    ctx->pc = 0x3127CCu;
    // 0x3127cc: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x3127CCu;
    {
        const bool branch_taken_0x3127cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3127D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3127CCu;
        // 0x3127d0: 0x90820000  lbu         $v0, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3127cc) {
            ctx->pc = 0x312860u;
            goto label_312860;
        }
    }
    ctx->pc = 0x3127D4u;
label_3127d4:
    // 0x3127d4: 0xdc890000  ld          $t1, 0x0($a0)
    ctx->pc = 0x3127d4u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3127d8: 0x91827  nor         $v1, $zero, $t1
    ctx->pc = 0x3127d8u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 9)));
    // 0x3127dc: 0x126102f  dsubu       $v0, $t1, $a2
    ctx->pc = 0x3127dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) - GPR_U64(ctx, 6));
    // 0x3127e0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3127e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3127e4: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x3127e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x3127e8: 0x5440001d  bnel        $v0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x3127E8u;
    {
        const bool branch_taken_0x3127e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3127e8) {
            ctx->pc = 0x3127ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3127E8u;
            // 0x3127ec: 0x90820000  lbu         $v0, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x312860u;
            goto label_312860;
        }
    }
    ctx->pc = 0x3127F0u;
    // 0x3127f0: 0x1271026  xor         $v0, $t1, $a3
    ctx->pc = 0x3127f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) ^ GPR_U64(ctx, 7));
    // 0x3127f4: 0x46182f  dsubu       $v1, $v0, $a2
    ctx->pc = 0x3127f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) - GPR_U64(ctx, 6));
    // 0x3127f8: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x3127f8u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x3127fc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3127fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x312800: 0x681824  and         $v1, $v1, $t0
    ctx->pc = 0x312800u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 8));
    // 0x312804: 0x54600016  bnel        $v1, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x312804u;
    {
        const bool branch_taken_0x312804 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x312804) {
            ctx->pc = 0x312808u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x312804u;
            // 0x312808: 0x90820000  lbu         $v0, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x312860u;
            goto label_312860;
        }
    }
    ctx->pc = 0x31280Cu;
    // 0x31280c: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x31280cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312810: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x312810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_312814:
    // 0x312814: 0xdc860000  ld          $a2, 0x0($a0)
    ctx->pc = 0x312814u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x312818: 0xc9102f  dsubu       $v0, $a2, $t1
    ctx->pc = 0x312818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) - GPR_U64(ctx, 9));
    // 0x31281c: 0x61827  nor         $v1, $zero, $a2
    ctx->pc = 0x31281cu;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 6)));
    // 0x312820: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x312820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x312824: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x312824u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x312828: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x312828u;
    {
        const bool branch_taken_0x312828 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31282Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312828u;
        // 0x31282c: 0xc71026  xor         $v0, $a2, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312828) {
            ctx->pc = 0x31285Cu;
            goto label_31285c;
        }
    }
    ctx->pc = 0x312830u;
    // 0x312830: 0x21827  nor         $v1, $zero, $v0
    ctx->pc = 0x312830u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x312834: 0x49102f  dsubu       $v0, $v0, $t1
    ctx->pc = 0x312834u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 9));
    // 0x312838: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x312838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x31283c: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x31283cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x312840: 0x5040fff4  beql        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x312840u;
    {
        const bool branch_taken_0x312840 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x312840) {
            ctx->pc = 0x312844u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x312840u;
            // 0x312844: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x312814u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_312814;
        }
    }
    ctx->pc = 0x312848u;
    // 0x312848: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x312848u;
    {
        const bool branch_taken_0x312848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31284Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312848u;
        // 0x31284c: 0x90820000  lbu         $v0, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312848) {
            ctx->pc = 0x312860u;
            goto label_312860;
        }
    }
    ctx->pc = 0x312850u;
label_312850:
    // 0x312850: 0x50450006  beql        $v0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x312850u;
    {
        const bool branch_taken_0x312850 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x312850) {
            ctx->pc = 0x312854u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x312850u;
            // 0x312854: 0x90830000  lbu         $v1, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31286Cu;
            goto label_31286c;
        }
    }
    ctx->pc = 0x312858u;
    // 0x312858: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x312858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_31285c:
    // 0x31285c: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x31285cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_312860:
    // 0x312860: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x312860u;
    {
        const bool branch_taken_0x312860 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x312860) {
            ctx->pc = 0x312850u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_312850;
        }
    }
    ctx->pc = 0x312868u;
    // 0x312868: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x312868u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_31286c:
    // 0x31286c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31286cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312870: 0x651826  xor         $v1, $v1, $a1
    ctx->pc = 0x312870u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 5));
    // 0x312874: 0x3e00008  jr          $ra
    ctx->pc = 0x312874u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x312878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312874u;
        // 0x312878: 0x83100a  movz        $v0, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x312874u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31287Cu;
}
