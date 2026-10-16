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

// Function: sub_0020B490
// Address: 0x20b490 - 0x20b720
void sub_0020B490_0x20b490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020B490_0x20b490");
#endif

    switch (ctx->pc) {
        case 0x20b508u: goto label_20b508;
        default: break;
    }

    ctx->pc = 0x20b490u;

    // 0x20b490: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x20b490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x20b494: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x20b494u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x20b498: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x20b498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x20b49c: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x20b49cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x20b4a0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x20b4a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x20b4a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20b4a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b4a8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x20b4a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x20b4ac: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x20b4acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x20b4b0: 0x7fb40000  sq          $s4, 0x0($sp)
    ctx->pc = 0x20b4b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 20));
    // 0x20b4b4: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x20b4b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x20b4b8: 0x8ca80000  lw          $t0, 0x0($a1)
    ctx->pc = 0x20b4b8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x20b4bc: 0x8ca90004  lw          $t1, 0x4($a1)
    ctx->pc = 0x20b4bcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x20b4c0: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x20b4c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x20b4c4: 0x8e0201c4  lw          $v0, 0x1C4($s0)
    ctx->pc = 0x20b4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 452)));
    // 0x20b4c8: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x20b4c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x20b4cc: 0x8e050070  lw          $a1, 0x70($s0)
    ctx->pc = 0x20b4ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x20b4d0: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x20b4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x20b4d4: 0x8ceb0004  lw          $t3, 0x4($a3)
    ctx->pc = 0x20b4d4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x20b4d8: 0x8e0a0144  lw          $t2, 0x144($s0)
    ctx->pc = 0x20b4d8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 324)));
    // 0x20b4dc: 0x5c042  srl         $t8, $a1, 1
    ctx->pc = 0x20b4dcu;
    SET_GPR_S32(ctx, 24, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x20b4e0: 0x8c53001c  lw          $s3, 0x1C($v0)
    ctx->pc = 0x20b4e0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x20b4e4: 0x8c510010  lw          $s1, 0x10($v0)
    ctx->pc = 0x20b4e4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x20b4e8: 0x8c540014  lw          $s4, 0x14($v0)
    ctx->pc = 0x20b4e8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x20b4ec: 0x8c520018  lw          $s2, 0x18($v0)
    ctx->pc = 0x20b4ecu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x20b4f0: 0x8cce0004  lw          $t6, 0x4($a2)
    ctx->pc = 0x20b4f0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x20b4f4: 0x8c790000  lw          $t9, 0x0($v1)
    ctx->pc = 0x20b4f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20b4f8: 0x8c8f0000  lw          $t7, 0x0($a0)
    ctx->pc = 0x20b4f8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x20b4fc: 0x8ccc0000  lw          $t4, 0x0($a2)
    ctx->pc = 0x20b4fcu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x20b500: 0x13000052  beqz        $t8, . + 4 + (0x52 << 2)
    ctx->pc = 0x20B500u;
    {
        const bool branch_taken_0x20b500 = (GPR_U64(ctx, 24) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B500u;
        // 0x20b504: 0x8ce70000  lw          $a3, 0x0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b500) {
            ctx->pc = 0x20B64Cu;
            goto label_20b64c;
        }
    }
    ctx->pc = 0x20B508u;
label_20b508:
    // 0x20b508: 0x91e40000  lbu         $a0, 0x0($t7)
    ctx->pc = 0x20b508u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x20b50c: 0x2718ffff  addiu       $t8, $t8, -0x1
    ctx->pc = 0x20b50cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 4294967295));
    // 0x20b510: 0x93290000  lbu         $t1, 0x0($t9)
    ctx->pc = 0x20b510u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x20b514: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x20b514u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x20b518: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x20b518u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x20b51c: 0x91880000  lbu         $t0, 0x0($t4)
    ctx->pc = 0x20b51cu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x20b520: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x20b520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x20b524: 0x910c0  sll         $v0, $t1, 3
    ctx->pc = 0x20b524u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x20b528: 0x8c6d0000  lw          $t5, 0x0($v1)
    ctx->pc = 0x20b528u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20b52c: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x20b52cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x20b530: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x20b530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x20b534: 0x922021  addu        $a0, $a0, $s2
    ctx->pc = 0x20b534u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x20b538: 0xdc860000  ld          $a2, 0x0($a0)
    ctx->pc = 0x20b538u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x20b53c: 0x10d1821  addu        $v1, $t0, $t5
    ctx->pc = 0x20b53cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 13)));
    // 0x20b540: 0xdc450000  ld          $a1, 0x0($v0)
    ctx->pc = 0x20b540u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20b544: 0x1431821  addu        $v1, $t2, $v1
    ctx->pc = 0x20b544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x20b548: 0x91080  sll         $v0, $t1, 2
    ctx->pc = 0x20b548u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x20b54c: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x20b54cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20b550: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x20b550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x20b554: 0xa6282d  daddu       $a1, $a1, $a2
    ctx->pc = 0x20b554u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 6));
    // 0x20b558: 0x8c490000  lw          $t1, 0x0($v0)
    ctx->pc = 0x20b558u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20b55c: 0x53438  dsll        $a2, $a1, 16
    ctx->pc = 0x20b55cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << 16);
    // 0x20b560: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x20b560u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x20b564: 0xa0e40000  sb          $a0, 0x0($a3)
    ctx->pc = 0x20b564u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x20b568: 0x1061021  addu        $v0, $t0, $a2
    ctx->pc = 0x20b568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x20b56c: 0x1421021  addu        $v0, $t2, $v0
    ctx->pc = 0x20b56cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x20b570: 0x1091821  addu        $v1, $t0, $t1
    ctx->pc = 0x20b570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x20b574: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x20b574u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20b578: 0x1431821  addu        $v1, $t2, $v1
    ctx->pc = 0x20b578u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x20b57c: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x20b57cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x20b580: 0x27390001  addiu       $t9, $t9, 0x1
    ctx->pc = 0x20b580u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 1));
    // 0x20b584: 0xa0e40001  sb          $a0, 0x1($a3)
    ctx->pc = 0x20b584u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x20b588: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x20b588u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20b58c: 0xa0e20002  sb          $v0, 0x2($a3)
    ctx->pc = 0x20b58cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x20b590: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x20b590u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x20b594: 0x91880000  lbu         $t0, 0x0($t4)
    ctx->pc = 0x20b594u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x20b598: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x20b598u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x20b59c: 0x10d1021  addu        $v0, $t0, $t5
    ctx->pc = 0x20b59cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 13)));
    // 0x20b5a0: 0x1061821  addu        $v1, $t0, $a2
    ctx->pc = 0x20b5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x20b5a4: 0x1421021  addu        $v0, $t2, $v0
    ctx->pc = 0x20b5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x20b5a8: 0x1431821  addu        $v1, $t2, $v1
    ctx->pc = 0x20b5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x20b5ac: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x20b5acu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20b5b0: 0x1092021  addu        $a0, $t0, $t1
    ctx->pc = 0x20b5b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x20b5b4: 0x1442021  addu        $a0, $t2, $a0
    ctx->pc = 0x20b5b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
    // 0x20b5b8: 0xa0e50000  sb          $a1, 0x0($a3)
    ctx->pc = 0x20b5b8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x20b5bc: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x20b5bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20b5c0: 0xa0e20001  sb          $v0, 0x1($a3)
    ctx->pc = 0x20b5c0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x20b5c4: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x20b5c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x20b5c8: 0xa0e30002  sb          $v1, 0x2($a3)
    ctx->pc = 0x20b5c8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x20b5cc: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x20b5ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x20b5d0: 0x91c80000  lbu         $t0, 0x0($t6)
    ctx->pc = 0x20b5d0u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x20b5d4: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x20b5d4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x20b5d8: 0x10d1021  addu        $v0, $t0, $t5
    ctx->pc = 0x20b5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 13)));
    // 0x20b5dc: 0x1061821  addu        $v1, $t0, $a2
    ctx->pc = 0x20b5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x20b5e0: 0x1421021  addu        $v0, $t2, $v0
    ctx->pc = 0x20b5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x20b5e4: 0x1431821  addu        $v1, $t2, $v1
    ctx->pc = 0x20b5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x20b5e8: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x20b5e8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20b5ec: 0x1092021  addu        $a0, $t0, $t1
    ctx->pc = 0x20b5ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x20b5f0: 0x1442021  addu        $a0, $t2, $a0
    ctx->pc = 0x20b5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
    // 0x20b5f4: 0xa1650000  sb          $a1, 0x0($t3)
    ctx->pc = 0x20b5f4u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x20b5f8: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x20b5f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20b5fc: 0xa1620001  sb          $v0, 0x1($t3)
    ctx->pc = 0x20b5fcu;
    WRITE8(ADD32(GPR_U32(ctx, 11), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x20b600: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x20b600u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x20b604: 0xa1630002  sb          $v1, 0x2($t3)
    ctx->pc = 0x20b604u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x20b608: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x20b608u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x20b60c: 0x91c80000  lbu         $t0, 0x0($t6)
    ctx->pc = 0x20b60cu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x20b610: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x20b610u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x20b614: 0x10d1021  addu        $v0, $t0, $t5
    ctx->pc = 0x20b614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 13)));
    // 0x20b618: 0x1061821  addu        $v1, $t0, $a2
    ctx->pc = 0x20b618u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x20b61c: 0x1421021  addu        $v0, $t2, $v0
    ctx->pc = 0x20b61cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x20b620: 0x1431821  addu        $v1, $t2, $v1
    ctx->pc = 0x20b620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x20b624: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x20b624u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20b628: 0x1092021  addu        $a0, $t0, $t1
    ctx->pc = 0x20b628u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x20b62c: 0x1442021  addu        $a0, $t2, $a0
    ctx->pc = 0x20b62cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
    // 0x20b630: 0xa1650000  sb          $a1, 0x0($t3)
    ctx->pc = 0x20b630u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x20b634: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x20b634u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20b638: 0xa1620001  sb          $v0, 0x1($t3)
    ctx->pc = 0x20b638u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x20b63c: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x20b63cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x20b640: 0xa1630002  sb          $v1, 0x2($t3)
    ctx->pc = 0x20b640u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x20b644: 0x1700ffb0  bnez        $t8, . + 4 + (-0x50 << 2)
    ctx->pc = 0x20B644u;
    {
        const bool branch_taken_0x20b644 = (GPR_U64(ctx, 24) != GPR_U64(ctx, 0));
        ctx->pc = 0x20B648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B644u;
        // 0x20b648: 0x256b0004  addiu       $t3, $t3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b644) {
            ctx->pc = 0x20B508u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20b508;
        }
    }
    ctx->pc = 0x20B64Cu;
label_20b64c:
    // 0x20b64c: 0x8e020070  lw          $v0, 0x70($s0)
    ctx->pc = 0x20b64cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x20b650: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x20b650u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x20b654: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x20B654u;
    {
        const bool branch_taken_0x20b654 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B654u;
        // 0x20b658: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b654) {
            ctx->pc = 0x20B708u;
            goto label_20b708;
        }
    }
    ctx->pc = 0x20B65Cu;
    // 0x20b65c: 0x91e40000  lbu         $a0, 0x0($t7)
    ctx->pc = 0x20b65cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x20b660: 0x93290000  lbu         $t1, 0x0($t9)
    ctx->pc = 0x20b660u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x20b664: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x20b664u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x20b668: 0x91880000  lbu         $t0, 0x0($t4)
    ctx->pc = 0x20b668u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x20b66c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x20b66cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x20b670: 0x910c0  sll         $v0, $t1, 3
    ctx->pc = 0x20b670u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x20b674: 0x8c6d0000  lw          $t5, 0x0($v1)
    ctx->pc = 0x20b674u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20b678: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x20b678u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x20b67c: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x20b67cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x20b680: 0x922021  addu        $a0, $a0, $s2
    ctx->pc = 0x20b680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x20b684: 0xdc860000  ld          $a2, 0x0($a0)
    ctx->pc = 0x20b684u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x20b688: 0x10d1821  addu        $v1, $t0, $t5
    ctx->pc = 0x20b688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 13)));
    // 0x20b68c: 0xdc450000  ld          $a1, 0x0($v0)
    ctx->pc = 0x20b68cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20b690: 0x1431821  addu        $v1, $t2, $v1
    ctx->pc = 0x20b690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x20b694: 0x91080  sll         $v0, $t1, 2
    ctx->pc = 0x20b694u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x20b698: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x20b698u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20b69c: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x20b69cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x20b6a0: 0xa6282d  daddu       $a1, $a1, $a2
    ctx->pc = 0x20b6a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 6));
    // 0x20b6a4: 0x8c490000  lw          $t1, 0x0($v0)
    ctx->pc = 0x20b6a4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20b6a8: 0x53438  dsll        $a2, $a1, 16
    ctx->pc = 0x20b6a8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << 16);
    // 0x20b6ac: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x20b6acu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x20b6b0: 0xa0e40000  sb          $a0, 0x0($a3)
    ctx->pc = 0x20b6b0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x20b6b4: 0x1061021  addu        $v0, $t0, $a2
    ctx->pc = 0x20b6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x20b6b8: 0x1421021  addu        $v0, $t2, $v0
    ctx->pc = 0x20b6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x20b6bc: 0x1091821  addu        $v1, $t0, $t1
    ctx->pc = 0x20b6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x20b6c0: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x20b6c0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20b6c4: 0x1431821  addu        $v1, $t2, $v1
    ctx->pc = 0x20b6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x20b6c8: 0xa0e40001  sb          $a0, 0x1($a3)
    ctx->pc = 0x20b6c8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x20b6cc: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x20b6ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20b6d0: 0xa0e20002  sb          $v0, 0x2($a3)
    ctx->pc = 0x20b6d0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x20b6d4: 0x91c80000  lbu         $t0, 0x0($t6)
    ctx->pc = 0x20b6d4u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x20b6d8: 0x10d1021  addu        $v0, $t0, $t5
    ctx->pc = 0x20b6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 13)));
    // 0x20b6dc: 0x1061821  addu        $v1, $t0, $a2
    ctx->pc = 0x20b6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x20b6e0: 0x1421021  addu        $v0, $t2, $v0
    ctx->pc = 0x20b6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x20b6e4: 0x1431821  addu        $v1, $t2, $v1
    ctx->pc = 0x20b6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x20b6e8: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x20b6e8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20b6ec: 0x1092021  addu        $a0, $t0, $t1
    ctx->pc = 0x20b6ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x20b6f0: 0x1442021  addu        $a0, $t2, $a0
    ctx->pc = 0x20b6f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
    // 0x20b6f4: 0xa1650000  sb          $a1, 0x0($t3)
    ctx->pc = 0x20b6f4u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x20b6f8: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x20b6f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20b6fc: 0xa1620001  sb          $v0, 0x1($t3)
    ctx->pc = 0x20b6fcu;
    WRITE8(ADD32(GPR_U32(ctx, 11), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x20b700: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x20b700u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x20b704: 0xa1630002  sb          $v1, 0x2($t3)
    ctx->pc = 0x20b704u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 2), (uint8_t)GPR_U32(ctx, 3));
label_20b708:
    // 0x20b708: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x20b708u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20b70c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x20b70cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20b710: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x20b710u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20b714: 0x7bb40000  lq          $s4, 0x0($sp)
    ctx->pc = 0x20b714u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20b718: 0x3e00008  jr          $ra
    ctx->pc = 0x20B718u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20B71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B718u;
        // 0x20b71c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20B718u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20B720u;
}
