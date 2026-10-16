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

// Function: sub_002222B0
// Address: 0x2222b0 - 0x222738
void sub_002222B0_0x2222b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002222B0_0x2222b0");
#endif

    switch (ctx->pc) {
        case 0x2222e8u: goto label_2222e8;
        case 0x222340u: goto label_222340;
        case 0x222668u: goto label_222668;
        case 0x2226e8u: goto label_2226e8;
        default: break;
    }

    ctx->pc = 0x2222b0u;

    // 0x2222b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2222b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2222b4: 0x4383c  dsll32      $a3, $a0, 0
    ctx->pc = 0x2222b4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2222b8: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x2222b8u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x2222bc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2222bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2222c0: 0xc0782d  daddu       $t7, $a2, $zero
    ctx->pc = 0x2222c0u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2222c4: 0x7fb10000  sq          $s1, 0x0($sp)
    ctx->pc = 0x2222c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 17));
    // 0x2222c8: 0x11e00014  beqz        $t7, . + 4 + (0x14 << 2)
    ctx->pc = 0x2222C8u;
    {
        const bool branch_taken_0x2222c8 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x2222CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2222C8u;
        // 0x2222cc: 0x73827  nor         $a3, $zero, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 7, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2222c8) {
            ctx->pc = 0x22231Cu;
            goto label_22231c;
        }
    }
    ctx->pc = 0x2222D0u;
    // 0x2222d0: 0x30a20003  andi        $v0, $a1, 0x3
    ctx->pc = 0x2222d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)3);
    // 0x2222d4: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2222D4u;
    {
        const bool branch_taken_0x2222d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2222D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2222D4u;
        // 0x2222d8: 0x3c02006a  lui         $v0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2222d4) {
            ctx->pc = 0x22231Cu;
            goto label_22231c;
        }
    }
    ctx->pc = 0x2222DCu;
    // 0x2222dc: 0x244666f0  addiu       $a2, $v0, 0x66F0
    ctx->pc = 0x2222dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 26352));
    // 0x2222e0: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x2222e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2222e4: 0x0  nop
    ctx->pc = 0x2222e4u;
    // NOP
label_2222e8:
    // 0x2222e8: 0x72202  srl         $a0, $a3, 8
    ctx->pc = 0x2222e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 7), 8));
    // 0x2222ec: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2222ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2222f0: 0x25efffff  addiu       $t7, $t7, -0x1
    ctx->pc = 0x2222f0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967295));
    // 0x2222f4: 0xe21026  xor         $v0, $a3, $v0
    ctx->pc = 0x2222f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) ^ GPR_U64(ctx, 2));
    // 0x2222f8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2222f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2222fc: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2222fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x222300: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x222300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x222304: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x222304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x222308: 0x11e00004  beqz        $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x222308u;
    {
        const bool branch_taken_0x222308 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x22230Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222308u;
        // 0x22230c: 0x643826  xor         $a3, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222308) {
            ctx->pc = 0x22231Cu;
            goto label_22231c;
        }
    }
    ctx->pc = 0x222310u;
    // 0x222310: 0x30a20003  andi        $v0, $a1, 0x3
    ctx->pc = 0x222310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)3);
    // 0x222314: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x222314u;
    {
        const bool branch_taken_0x222314 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x222314) {
            ctx->pc = 0x222318u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x222314u;
            // 0x222318: 0x90a20000  lbu         $v0, 0x0($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2222E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2222e8;
        }
    }
    ctx->pc = 0x22231Cu;
label_22231c:
    // 0x22231c: 0x2de20020  sltiu       $v0, $t7, 0x20
    ctx->pc = 0x22231cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x222320: 0x144000ca  bnez        $v0, . + 4 + (0xCA << 2)
    ctx->pc = 0x222320u;
    {
        const bool branch_taken_0x222320 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x222324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222320u;
        // 0x222324: 0xa0702d  daddu       $t6, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222320) {
            ctx->pc = 0x22264Cu;
            goto label_22264c;
        }
    }
    ctx->pc = 0x222328u;
    // 0x222328: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x222328u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x22232c: 0x245866f0  addiu       $t8, $v0, 0x66F0
    ctx->pc = 0x22232cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 2), 26352));
    // 0x222330: 0x27111800  addiu       $s1, $t8, 0x1800
    ctx->pc = 0x222330u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 24), 6144));
    // 0x222334: 0x27101000  addiu       $s0, $t8, 0x1000
    ctx->pc = 0x222334u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 24), 4096));
    // 0x222338: 0x27190800  addiu       $t9, $t8, 0x800
    ctx->pc = 0x222338u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 24), 2048));
    // 0x22233c: 0x0  nop
    ctx->pc = 0x22233cu;
    // NOP
label_222340:
    // 0x222340: 0x8dc20000  lw          $v0, 0x0($t6)
    ctx->pc = 0x222340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x222344: 0x25efffe0  addiu       $t7, $t7, -0x20
    ctx->pc = 0x222344u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967264));
    // 0x222348: 0x25ce0004  addiu       $t6, $t6, 0x4
    ctx->pc = 0x222348u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4));
    // 0x22234c: 0x2ded0020  sltiu       $t5, $t7, 0x20
    ctx->pc = 0x22234cu;
    SET_GPR_U64(ctx, 13, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x222350: 0xe23826  xor         $a3, $a3, $v0
    ctx->pc = 0x222350u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) ^ GPR_U64(ctx, 2));
    // 0x222354: 0x8dc80000  lw          $t0, 0x0($t6)
    ctx->pc = 0x222354u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x222358: 0x30e300ff  andi        $v1, $a3, 0xFF
    ctx->pc = 0x222358u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x22235c: 0x72142  srl         $a0, $a3, 5
    ctx->pc = 0x22235cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 7), 5));
    // 0x222360: 0x72b42  srl         $a1, $a3, 13
    ctx->pc = 0x222360u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 7), 13));
    // 0x222364: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x222364u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x222368: 0x308407f8  andi        $a0, $a0, 0x7F8
    ctx->pc = 0x222368u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2040);
    // 0x22236c: 0x73602  srl         $a2, $a3, 24
    ctx->pc = 0x22236cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 7), 24));
    // 0x222370: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x222370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x222374: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x222374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x222378: 0x30a507f8  andi        $a1, $a1, 0x7F8
    ctx->pc = 0x222378u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2040);
    // 0x22237c: 0xdc870000  ld          $a3, 0x0($a0)
    ctx->pc = 0x22237cu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x222380: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x222380u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x222384: 0xb92821  addu        $a1, $a1, $t9
    ctx->pc = 0x222384u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 25)));
    // 0x222388: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x222388u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x22238c: 0xdca40000  ld          $a0, 0x0($a1)
    ctx->pc = 0x22238cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x222390: 0xd83021  addu        $a2, $a2, $t8
    ctx->pc = 0x222390u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 24)));
    // 0x222394: 0x471026  xor         $v0, $v0, $a3
    ctx->pc = 0x222394u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 7));
    // 0x222398: 0xdcc30000  ld          $v1, 0x0($a2)
    ctx->pc = 0x222398u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x22239c: 0x441026  xor         $v0, $v0, $a0
    ctx->pc = 0x22239cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 4));
    // 0x2223a0: 0x25ce0004  addiu       $t6, $t6, 0x4
    ctx->pc = 0x2223a0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4));
    // 0x2223a4: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x2223a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x2223a8: 0x8dc90000  lw          $t1, 0x0($t6)
    ctx->pc = 0x2223a8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x2223ac: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x2223acu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2223b0: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x2223b0u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x2223b4: 0x25ce0004  addiu       $t6, $t6, 0x4
    ctx->pc = 0x2223b4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4));
    // 0x2223b8: 0xe83826  xor         $a3, $a3, $t0
    ctx->pc = 0x2223b8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) ^ GPR_U64(ctx, 8));
    // 0x2223bc: 0x8dca0000  lw          $t2, 0x0($t6)
    ctx->pc = 0x2223bcu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x2223c0: 0x30e300ff  andi        $v1, $a3, 0xFF
    ctx->pc = 0x2223c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x2223c4: 0x72142  srl         $a0, $a3, 5
    ctx->pc = 0x2223c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 7), 5));
    // 0x2223c8: 0x72b42  srl         $a1, $a3, 13
    ctx->pc = 0x2223c8u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 7), 13));
    // 0x2223cc: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2223ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2223d0: 0x308407f8  andi        $a0, $a0, 0x7F8
    ctx->pc = 0x2223d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2040);
    // 0x2223d4: 0x73602  srl         $a2, $a3, 24
    ctx->pc = 0x2223d4u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 7), 24));
    // 0x2223d8: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x2223d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x2223dc: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x2223dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x2223e0: 0x30a507f8  andi        $a1, $a1, 0x7F8
    ctx->pc = 0x2223e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2040);
    // 0x2223e4: 0xdc870000  ld          $a3, 0x0($a0)
    ctx->pc = 0x2223e4u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2223e8: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x2223e8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2223ec: 0xb92821  addu        $a1, $a1, $t9
    ctx->pc = 0x2223ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 25)));
    // 0x2223f0: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x2223f0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x2223f4: 0xdca40000  ld          $a0, 0x0($a1)
    ctx->pc = 0x2223f4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2223f8: 0xd83021  addu        $a2, $a2, $t8
    ctx->pc = 0x2223f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 24)));
    // 0x2223fc: 0x471026  xor         $v0, $v0, $a3
    ctx->pc = 0x2223fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 7));
    // 0x222400: 0xdcc30000  ld          $v1, 0x0($a2)
    ctx->pc = 0x222400u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x222404: 0x441026  xor         $v0, $v0, $a0
    ctx->pc = 0x222404u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 4));
    // 0x222408: 0x25ce0004  addiu       $t6, $t6, 0x4
    ctx->pc = 0x222408u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4));
    // 0x22240c: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x22240cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x222410: 0x8dc80000  lw          $t0, 0x0($t6)
    ctx->pc = 0x222410u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x222414: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x222414u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
    // 0x222418: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x222418u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x22241c: 0x25ce0004  addiu       $t6, $t6, 0x4
    ctx->pc = 0x22241cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4));
    // 0x222420: 0xe93826  xor         $a3, $a3, $t1
    ctx->pc = 0x222420u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) ^ GPR_U64(ctx, 9));
    // 0x222424: 0x8dcb0000  lw          $t3, 0x0($t6)
    ctx->pc = 0x222424u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x222428: 0x30e300ff  andi        $v1, $a3, 0xFF
    ctx->pc = 0x222428u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x22242c: 0x72142  srl         $a0, $a3, 5
    ctx->pc = 0x22242cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 7), 5));
    // 0x222430: 0x72b42  srl         $a1, $a3, 13
    ctx->pc = 0x222430u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 7), 13));
    // 0x222434: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x222434u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x222438: 0x308407f8  andi        $a0, $a0, 0x7F8
    ctx->pc = 0x222438u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2040);
    // 0x22243c: 0x73602  srl         $a2, $a3, 24
    ctx->pc = 0x22243cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 7), 24));
    // 0x222440: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x222440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x222444: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x222444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x222448: 0x30a507f8  andi        $a1, $a1, 0x7F8
    ctx->pc = 0x222448u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2040);
    // 0x22244c: 0xdc870000  ld          $a3, 0x0($a0)
    ctx->pc = 0x22244cu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x222450: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x222450u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x222454: 0xb92821  addu        $a1, $a1, $t9
    ctx->pc = 0x222454u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 25)));
    // 0x222458: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x222458u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x22245c: 0xdca40000  ld          $a0, 0x0($a1)
    ctx->pc = 0x22245cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x222460: 0xd83021  addu        $a2, $a2, $t8
    ctx->pc = 0x222460u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 24)));
    // 0x222464: 0x471026  xor         $v0, $v0, $a3
    ctx->pc = 0x222464u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 7));
    // 0x222468: 0xdcc30000  ld          $v1, 0x0($a2)
    ctx->pc = 0x222468u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x22246c: 0x441026  xor         $v0, $v0, $a0
    ctx->pc = 0x22246cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 4));
    // 0x222470: 0x25ce0004  addiu       $t6, $t6, 0x4
    ctx->pc = 0x222470u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4));
    // 0x222474: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x222474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x222478: 0x8dc90000  lw          $t1, 0x0($t6)
    ctx->pc = 0x222478u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x22247c: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x22247cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
    // 0x222480: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x222480u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x222484: 0x25ce0004  addiu       $t6, $t6, 0x4
    ctx->pc = 0x222484u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4));
    // 0x222488: 0xea3826  xor         $a3, $a3, $t2
    ctx->pc = 0x222488u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) ^ GPR_U64(ctx, 10));
    // 0x22248c: 0x8dcc0000  lw          $t4, 0x0($t6)
    ctx->pc = 0x22248cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x222490: 0x30e300ff  andi        $v1, $a3, 0xFF
    ctx->pc = 0x222490u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x222494: 0x72142  srl         $a0, $a3, 5
    ctx->pc = 0x222494u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 7), 5));
    // 0x222498: 0x72b42  srl         $a1, $a3, 13
    ctx->pc = 0x222498u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 7), 13));
    // 0x22249c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x22249cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2224a0: 0x308407f8  andi        $a0, $a0, 0x7F8
    ctx->pc = 0x2224a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2040);
    // 0x2224a4: 0x73602  srl         $a2, $a3, 24
    ctx->pc = 0x2224a4u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 7), 24));
    // 0x2224a8: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x2224a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x2224ac: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x2224acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x2224b0: 0x30a507f8  andi        $a1, $a1, 0x7F8
    ctx->pc = 0x2224b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2040);
    // 0x2224b4: 0xdc870000  ld          $a3, 0x0($a0)
    ctx->pc = 0x2224b4u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2224b8: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x2224b8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2224bc: 0xb92821  addu        $a1, $a1, $t9
    ctx->pc = 0x2224bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 25)));
    // 0x2224c0: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x2224c0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x2224c4: 0xdca40000  ld          $a0, 0x0($a1)
    ctx->pc = 0x2224c4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2224c8: 0xd83021  addu        $a2, $a2, $t8
    ctx->pc = 0x2224c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 24)));
    // 0x2224cc: 0x471026  xor         $v0, $v0, $a3
    ctx->pc = 0x2224ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 7));
    // 0x2224d0: 0xdcc30000  ld          $v1, 0x0($a2)
    ctx->pc = 0x2224d0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2224d4: 0x441026  xor         $v0, $v0, $a0
    ctx->pc = 0x2224d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 4));
    // 0x2224d8: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x2224d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x2224dc: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x2224dcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2224e0: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x2224e0u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x2224e4: 0xe83826  xor         $a3, $a3, $t0
    ctx->pc = 0x2224e4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) ^ GPR_U64(ctx, 8));
    // 0x2224e8: 0x30e300ff  andi        $v1, $a3, 0xFF
    ctx->pc = 0x2224e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x2224ec: 0x72142  srl         $a0, $a3, 5
    ctx->pc = 0x2224ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 7), 5));
    // 0x2224f0: 0x72b42  srl         $a1, $a3, 13
    ctx->pc = 0x2224f0u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 7), 13));
    // 0x2224f4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2224f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2224f8: 0x308407f8  andi        $a0, $a0, 0x7F8
    ctx->pc = 0x2224f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2040);
    // 0x2224fc: 0x73602  srl         $a2, $a3, 24
    ctx->pc = 0x2224fcu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 7), 24));
    // 0x222500: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x222500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x222504: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x222504u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x222508: 0x30a507f8  andi        $a1, $a1, 0x7F8
    ctx->pc = 0x222508u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2040);
    // 0x22250c: 0xdc870000  ld          $a3, 0x0($a0)
    ctx->pc = 0x22250cu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x222510: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x222510u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x222514: 0xb92821  addu        $a1, $a1, $t9
    ctx->pc = 0x222514u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 25)));
    // 0x222518: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x222518u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x22251c: 0xdca40000  ld          $a0, 0x0($a1)
    ctx->pc = 0x22251cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x222520: 0xd83021  addu        $a2, $a2, $t8
    ctx->pc = 0x222520u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 24)));
    // 0x222524: 0x471026  xor         $v0, $v0, $a3
    ctx->pc = 0x222524u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 7));
    // 0x222528: 0xdcc30000  ld          $v1, 0x0($a2)
    ctx->pc = 0x222528u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x22252c: 0x441026  xor         $v0, $v0, $a0
    ctx->pc = 0x22252cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 4));
    // 0x222530: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x222530u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x222534: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x222534u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
    // 0x222538: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x222538u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x22253c: 0xeb3826  xor         $a3, $a3, $t3
    ctx->pc = 0x22253cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) ^ GPR_U64(ctx, 11));
    // 0x222540: 0x30e300ff  andi        $v1, $a3, 0xFF
    ctx->pc = 0x222540u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x222544: 0x72142  srl         $a0, $a3, 5
    ctx->pc = 0x222544u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 7), 5));
    // 0x222548: 0x72b42  srl         $a1, $a3, 13
    ctx->pc = 0x222548u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 7), 13));
    // 0x22254c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x22254cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x222550: 0x308407f8  andi        $a0, $a0, 0x7F8
    ctx->pc = 0x222550u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2040);
    // 0x222554: 0x73602  srl         $a2, $a3, 24
    ctx->pc = 0x222554u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 7), 24));
    // 0x222558: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x222558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x22255c: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x22255cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x222560: 0x30a507f8  andi        $a1, $a1, 0x7F8
    ctx->pc = 0x222560u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2040);
    // 0x222564: 0xdc870000  ld          $a3, 0x0($a0)
    ctx->pc = 0x222564u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x222568: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x222568u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22256c: 0xb92821  addu        $a1, $a1, $t9
    ctx->pc = 0x22256cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 25)));
    // 0x222570: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x222570u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x222574: 0xdca40000  ld          $a0, 0x0($a1)
    ctx->pc = 0x222574u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x222578: 0xd83021  addu        $a2, $a2, $t8
    ctx->pc = 0x222578u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 24)));
    // 0x22257c: 0x471026  xor         $v0, $v0, $a3
    ctx->pc = 0x22257cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 7));
    // 0x222580: 0xdcc30000  ld          $v1, 0x0($a2)
    ctx->pc = 0x222580u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x222584: 0x441026  xor         $v0, $v0, $a0
    ctx->pc = 0x222584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 4));
    // 0x222588: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x222588u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x22258c: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x22258cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
    // 0x222590: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x222590u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x222594: 0xe93826  xor         $a3, $a3, $t1
    ctx->pc = 0x222594u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) ^ GPR_U64(ctx, 9));
    // 0x222598: 0x30e300ff  andi        $v1, $a3, 0xFF
    ctx->pc = 0x222598u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x22259c: 0x72142  srl         $a0, $a3, 5
    ctx->pc = 0x22259cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 7), 5));
    // 0x2225a0: 0x72b42  srl         $a1, $a3, 13
    ctx->pc = 0x2225a0u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 7), 13));
    // 0x2225a4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2225a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2225a8: 0x308407f8  andi        $a0, $a0, 0x7F8
    ctx->pc = 0x2225a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2040);
    // 0x2225ac: 0x73602  srl         $a2, $a3, 24
    ctx->pc = 0x2225acu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 7), 24));
    // 0x2225b0: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x2225b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x2225b4: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x2225b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x2225b8: 0x30a507f8  andi        $a1, $a1, 0x7F8
    ctx->pc = 0x2225b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2040);
    // 0x2225bc: 0xdc870000  ld          $a3, 0x0($a0)
    ctx->pc = 0x2225bcu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2225c0: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x2225c0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2225c4: 0xb92821  addu        $a1, $a1, $t9
    ctx->pc = 0x2225c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 25)));
    // 0x2225c8: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x2225c8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x2225cc: 0xdca40000  ld          $a0, 0x0($a1)
    ctx->pc = 0x2225ccu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2225d0: 0xd83021  addu        $a2, $a2, $t8
    ctx->pc = 0x2225d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 24)));
    // 0x2225d4: 0x471026  xor         $v0, $v0, $a3
    ctx->pc = 0x2225d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 7));
    // 0x2225d8: 0xdcc30000  ld          $v1, 0x0($a2)
    ctx->pc = 0x2225d8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2225dc: 0x441026  xor         $v0, $v0, $a0
    ctx->pc = 0x2225dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 4));
    // 0x2225e0: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x2225e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x2225e4: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x2225e4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2225e8: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x2225e8u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x2225ec: 0xec3826  xor         $a3, $a3, $t4
    ctx->pc = 0x2225ecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) ^ GPR_U64(ctx, 12));
    // 0x2225f0: 0x30e300ff  andi        $v1, $a3, 0xFF
    ctx->pc = 0x2225f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x2225f4: 0x72142  srl         $a0, $a3, 5
    ctx->pc = 0x2225f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 7), 5));
    // 0x2225f8: 0x72b42  srl         $a1, $a3, 13
    ctx->pc = 0x2225f8u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 7), 13));
    // 0x2225fc: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2225fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x222600: 0x308407f8  andi        $a0, $a0, 0x7F8
    ctx->pc = 0x222600u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2040);
    // 0x222604: 0x73602  srl         $a2, $a3, 24
    ctx->pc = 0x222604u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 7), 24));
    // 0x222608: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x222608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x22260c: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x22260cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x222610: 0x30a507f8  andi        $a1, $a1, 0x7F8
    ctx->pc = 0x222610u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2040);
    // 0x222614: 0xdc870000  ld          $a3, 0x0($a0)
    ctx->pc = 0x222614u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x222618: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x222618u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22261c: 0xb92821  addu        $a1, $a1, $t9
    ctx->pc = 0x22261cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 25)));
    // 0x222620: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x222620u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x222624: 0xdca40000  ld          $a0, 0x0($a1)
    ctx->pc = 0x222624u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x222628: 0xd83021  addu        $a2, $a2, $t8
    ctx->pc = 0x222628u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 24)));
    // 0x22262c: 0x471026  xor         $v0, $v0, $a3
    ctx->pc = 0x22262cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 7));
    // 0x222630: 0xdcc30000  ld          $v1, 0x0($a2)
    ctx->pc = 0x222630u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x222634: 0x441026  xor         $v0, $v0, $a0
    ctx->pc = 0x222634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 4));
    // 0x222638: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x222638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x22263c: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x22263cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
    // 0x222640: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x222640u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x222644: 0x11a0ff3e  beqz        $t5, . + 4 + (-0xC2 << 2)
    ctx->pc = 0x222644u;
    {
        const bool branch_taken_0x222644 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x222648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222644u;
        // 0x222648: 0x25ce0004  addiu       $t6, $t6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222644) {
            ctx->pc = 0x222340u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_222340;
        }
    }
    ctx->pc = 0x22264Cu;
label_22264c:
    // 0x22264c: 0x2de20004  sltiu       $v0, $t7, 0x4
    ctx->pc = 0x22264cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x222650: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x222650u;
    {
        const bool branch_taken_0x222650 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x222654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222650u;
        // 0x222654: 0x3c02006a  lui         $v0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222650) {
            ctx->pc = 0x2226D4u;
            goto label_2226d4;
        }
    }
    ctx->pc = 0x222658u;
    // 0x222658: 0x244966f0  addiu       $t1, $v0, 0x66F0
    ctx->pc = 0x222658u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 26352));
    // 0x22265c: 0x252c1800  addiu       $t4, $t1, 0x1800
    ctx->pc = 0x22265cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 9), 6144));
    // 0x222660: 0x252b1000  addiu       $t3, $t1, 0x1000
    ctx->pc = 0x222660u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 9), 4096));
    // 0x222664: 0x252a0800  addiu       $t2, $t1, 0x800
    ctx->pc = 0x222664u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), 2048));
label_222668:
    // 0x222668: 0x8dc20000  lw          $v0, 0x0($t6)
    ctx->pc = 0x222668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x22266c: 0x25effffc  addiu       $t7, $t7, -0x4
    ctx->pc = 0x22266cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967292));
    // 0x222670: 0x2de80004  sltiu       $t0, $t7, 0x4
    ctx->pc = 0x222670u;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x222674: 0xe23826  xor         $a3, $a3, $v0
    ctx->pc = 0x222674u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) ^ GPR_U64(ctx, 2));
    // 0x222678: 0x30e300ff  andi        $v1, $a3, 0xFF
    ctx->pc = 0x222678u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x22267c: 0x72142  srl         $a0, $a3, 5
    ctx->pc = 0x22267cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 7), 5));
    // 0x222680: 0x72b42  srl         $a1, $a3, 13
    ctx->pc = 0x222680u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 7), 13));
    // 0x222684: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x222684u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x222688: 0x308407f8  andi        $a0, $a0, 0x7F8
    ctx->pc = 0x222688u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2040);
    // 0x22268c: 0x73602  srl         $a2, $a3, 24
    ctx->pc = 0x22268cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 7), 24));
    // 0x222690: 0x6c1821  addu        $v1, $v1, $t4
    ctx->pc = 0x222690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x222694: 0x8b2021  addu        $a0, $a0, $t3
    ctx->pc = 0x222694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
    // 0x222698: 0x30a507f8  andi        $a1, $a1, 0x7F8
    ctx->pc = 0x222698u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2040);
    // 0x22269c: 0xdc870000  ld          $a3, 0x0($a0)
    ctx->pc = 0x22269cu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2226a0: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x2226a0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2226a4: 0xaa2821  addu        $a1, $a1, $t2
    ctx->pc = 0x2226a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
    // 0x2226a8: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x2226a8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x2226ac: 0xdca40000  ld          $a0, 0x0($a1)
    ctx->pc = 0x2226acu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2226b0: 0xc93021  addu        $a2, $a2, $t1
    ctx->pc = 0x2226b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x2226b4: 0x471026  xor         $v0, $v0, $a3
    ctx->pc = 0x2226b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 7));
    // 0x2226b8: 0xdcc30000  ld          $v1, 0x0($a2)
    ctx->pc = 0x2226b8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2226bc: 0x441026  xor         $v0, $v0, $a0
    ctx->pc = 0x2226bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 4));
    // 0x2226c0: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x2226c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x2226c4: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x2226c4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2226c8: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x2226c8u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x2226cc: 0x1100ffe6  beqz        $t0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x2226CCu;
    {
        const bool branch_taken_0x2226cc = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x2226D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2226CCu;
        // 0x2226d0: 0x25ce0004  addiu       $t6, $t6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2226cc) {
            ctx->pc = 0x222668u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_222668;
        }
    }
    ctx->pc = 0x2226D4u;
label_2226d4:
    // 0x2226d4: 0x11e0000f  beqz        $t7, . + 4 + (0xF << 2)
    ctx->pc = 0x2226D4u;
    {
        const bool branch_taken_0x2226d4 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x2226D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2226D4u;
        // 0x2226d8: 0x1c0282d  daddu       $a1, $t6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2226d4) {
            ctx->pc = 0x222714u;
            goto label_222714;
        }
    }
    ctx->pc = 0x2226DCu;
    // 0x2226dc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2226dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2226e0: 0x244666f0  addiu       $a2, $v0, 0x66F0
    ctx->pc = 0x2226e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 26352));
    // 0x2226e4: 0x0  nop
    ctx->pc = 0x2226e4u;
    // NOP
label_2226e8:
    // 0x2226e8: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x2226e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2226ec: 0x72202  srl         $a0, $a3, 8
    ctx->pc = 0x2226ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 7), 8));
    // 0x2226f0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2226f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2226f4: 0x25efffff  addiu       $t7, $t7, -0x1
    ctx->pc = 0x2226f4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967295));
    // 0x2226f8: 0xe21026  xor         $v0, $a3, $v0
    ctx->pc = 0x2226f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) ^ GPR_U64(ctx, 2));
    // 0x2226fc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2226fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x222700: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x222700u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x222704: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x222704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x222708: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x222708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22270c: 0x15e0fff6  bnez        $t7, . + 4 + (-0xA << 2)
    ctx->pc = 0x22270Cu;
    {
        const bool branch_taken_0x22270c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x222710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22270Cu;
        // 0x222710: 0x643826  xor         $a3, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22270c) {
            ctx->pc = 0x2226E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2226e8;
        }
    }
    ctx->pc = 0x222714u;
label_222714:
    // 0x222714: 0x73827  nor         $a3, $zero, $a3
    ctx->pc = 0x222714u;
    SET_GPR_U64(ctx, 7, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 7)));
    // 0x222718: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x222718u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22271c: 0x7103c  dsll32      $v0, $a3, 0
    ctx->pc = 0x22271cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
    // 0x222720: 0x7bb10000  lq          $s1, 0x0($sp)
    ctx->pc = 0x222720u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x222724: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x222724u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x222728: 0x3e00008  jr          $ra
    ctx->pc = 0x222728u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22272Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222728u;
        // 0x22272c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x222728u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x222730u;
    // 0x222730: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x222730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x222734: 0x0  nop
    ctx->pc = 0x222734u;
    // NOP
    ctx->pc = 0x222738u;
}
