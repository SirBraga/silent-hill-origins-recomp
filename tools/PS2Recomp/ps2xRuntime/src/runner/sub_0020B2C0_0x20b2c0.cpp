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

// Function: sub_0020B2C0
// Address: 0x20b2c0 - 0x20b490
void sub_0020B2C0_0x20b2c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020B2C0_0x20b2c0");
#endif

    switch (ctx->pc) {
        case 0x20b328u: goto label_20b328;
        default: break;
    }

    ctx->pc = 0x20b2c0u;

    // 0x20b2c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x20b2c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x20b2c4: 0x80c02d  daddu       $t8, $a0, $zero
    ctx->pc = 0x20b2c4u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b2c8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x20b2c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x20b2cc: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x20b2ccu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x20b2d0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x20b2d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x20b2d4: 0x7fb20000  sq          $s2, 0x0($sp)
    ctx->pc = 0x20b2d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 18));
    // 0x20b2d8: 0x8ca80008  lw          $t0, 0x8($a1)
    ctx->pc = 0x20b2d8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x20b2dc: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x20b2dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x20b2e0: 0x8ca90004  lw          $t1, 0x4($a1)
    ctx->pc = 0x20b2e0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x20b2e4: 0xc84021  addu        $t0, $a2, $t0
    ctx->pc = 0x20b2e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x20b2e8: 0x8f0201c4  lw          $v0, 0x1C4($t8)
    ctx->pc = 0x20b2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 452)));
    // 0x20b2ec: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x20b2ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x20b2f0: 0x8f030070  lw          $v1, 0x70($t8)
    ctx->pc = 0x20b2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 112)));
    // 0x20b2f4: 0xc93021  addu        $a2, $a2, $t1
    ctx->pc = 0x20b2f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x20b2f8: 0x8f0c0144  lw          $t4, 0x144($t8)
    ctx->pc = 0x20b2f8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 324)));
    // 0x20b2fc: 0x8c51001c  lw          $s1, 0x1C($v0)
    ctx->pc = 0x20b2fcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x20b300: 0x37042  srl         $t6, $v1, 1
    ctx->pc = 0x20b300u;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x20b304: 0x8c590010  lw          $t9, 0x10($v0)
    ctx->pc = 0x20b304u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x20b308: 0x8c520014  lw          $s2, 0x14($v0)
    ctx->pc = 0x20b308u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x20b30c: 0x8c500018  lw          $s0, 0x18($v0)
    ctx->pc = 0x20b30cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x20b310: 0x8c8d0000  lw          $t5, 0x0($a0)
    ctx->pc = 0x20b310u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x20b314: 0x8ccf0000  lw          $t7, 0x0($a2)
    ctx->pc = 0x20b314u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x20b318: 0x8d080000  lw          $t0, 0x0($t0)
    ctx->pc = 0x20b318u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x20b31c: 0x11c00035  beqz        $t6, . + 4 + (0x35 << 2)
    ctx->pc = 0x20B31Cu;
    {
        const bool branch_taken_0x20b31c = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B31Cu;
        // 0x20b320: 0x8ce70000  lw          $a3, 0x0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b31c) {
            ctx->pc = 0x20B3F4u;
            goto label_20b3f4;
        }
    }
    ctx->pc = 0x20B324u;
    // 0x20b324: 0x0  nop
    ctx->pc = 0x20b324u;
    // NOP
label_20b328:
    // 0x20b328: 0x91040000  lbu         $a0, 0x0($t0)
    ctx->pc = 0x20b328u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x20b32c: 0x25ceffff  addiu       $t6, $t6, -0x1
    ctx->pc = 0x20b32cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
    // 0x20b330: 0x91ea0000  lbu         $t2, 0x0($t7)
    ctx->pc = 0x20b330u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x20b334: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x20b334u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x20b338: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x20b338u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x20b33c: 0x91a90000  lbu         $t1, 0x0($t5)
    ctx->pc = 0x20b33cu;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x20b340: 0x791821  addu        $v1, $v1, $t9
    ctx->pc = 0x20b340u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 25)));
    // 0x20b344: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x20b344u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x20b348: 0x8c6b0000  lw          $t3, 0x0($v1)
    ctx->pc = 0x20b348u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20b34c: 0xa10c0  sll         $v0, $t2, 3
    ctx->pc = 0x20b34cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x20b350: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x20b350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x20b354: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x20b354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x20b358: 0xdc860000  ld          $a2, 0x0($a0)
    ctx->pc = 0x20b358u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x20b35c: 0x12b1821  addu        $v1, $t1, $t3
    ctx->pc = 0x20b35cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 11)));
    // 0x20b360: 0xdc450000  ld          $a1, 0x0($v0)
    ctx->pc = 0x20b360u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20b364: 0x1831821  addu        $v1, $t4, $v1
    ctx->pc = 0x20b364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
    // 0x20b368: 0xa1080  sll         $v0, $t2, 2
    ctx->pc = 0x20b368u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x20b36c: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x20b36cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20b370: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x20b370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x20b374: 0xa6282d  daddu       $a1, $a1, $a2
    ctx->pc = 0x20b374u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 6));
    // 0x20b378: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x20b378u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20b37c: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x20b37cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x20b380: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x20b380u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x20b384: 0xa0e40000  sb          $a0, 0x0($a3)
    ctx->pc = 0x20b384u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x20b388: 0x1251021  addu        $v0, $t1, $a1
    ctx->pc = 0x20b388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x20b38c: 0x1821021  addu        $v0, $t4, $v0
    ctx->pc = 0x20b38cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x20b390: 0x1261821  addu        $v1, $t1, $a2
    ctx->pc = 0x20b390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
    // 0x20b394: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x20b394u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20b398: 0x1831821  addu        $v1, $t4, $v1
    ctx->pc = 0x20b398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
    // 0x20b39c: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x20b39cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x20b3a0: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x20b3a0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x20b3a4: 0xa0e40001  sb          $a0, 0x1($a3)
    ctx->pc = 0x20b3a4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x20b3a8: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x20b3a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20b3ac: 0xa0e20002  sb          $v0, 0x2($a3)
    ctx->pc = 0x20b3acu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x20b3b0: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x20b3b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x20b3b4: 0x91a90000  lbu         $t1, 0x0($t5)
    ctx->pc = 0x20b3b4u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x20b3b8: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x20b3b8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x20b3bc: 0x12b1021  addu        $v0, $t1, $t3
    ctx->pc = 0x20b3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 11)));
    // 0x20b3c0: 0x1251821  addu        $v1, $t1, $a1
    ctx->pc = 0x20b3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x20b3c4: 0x1821021  addu        $v0, $t4, $v0
    ctx->pc = 0x20b3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x20b3c8: 0x1831821  addu        $v1, $t4, $v1
    ctx->pc = 0x20b3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
    // 0x20b3cc: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x20b3ccu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20b3d0: 0x1262021  addu        $a0, $t1, $a2
    ctx->pc = 0x20b3d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
    // 0x20b3d4: 0x1842021  addu        $a0, $t4, $a0
    ctx->pc = 0x20b3d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
    // 0x20b3d8: 0xa0e50000  sb          $a1, 0x0($a3)
    ctx->pc = 0x20b3d8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x20b3dc: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x20b3dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20b3e0: 0xa0e20001  sb          $v0, 0x1($a3)
    ctx->pc = 0x20b3e0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x20b3e4: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x20b3e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x20b3e8: 0xa0e30002  sb          $v1, 0x2($a3)
    ctx->pc = 0x20b3e8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x20b3ec: 0x15c0ffce  bnez        $t6, . + 4 + (-0x32 << 2)
    ctx->pc = 0x20B3ECu;
    {
        const bool branch_taken_0x20b3ec = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x20B3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B3ECu;
        // 0x20b3f0: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b3ec) {
            ctx->pc = 0x20B328u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20b328;
        }
    }
    ctx->pc = 0x20B3F4u;
label_20b3f4:
    // 0x20b3f4: 0x8f020070  lw          $v0, 0x70($t8)
    ctx->pc = 0x20b3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 112)));
    // 0x20b3f8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x20b3f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x20b3fc: 0x50400020  beql        $v0, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x20B3FCu;
    {
        const bool branch_taken_0x20b3fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b3fc) {
            ctx->pc = 0x20B400u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20B3FCu;
            // 0x20b400: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20B480u;
            goto label_20b480;
        }
    }
    ctx->pc = 0x20B404u;
    // 0x20b404: 0x91040000  lbu         $a0, 0x0($t0)
    ctx->pc = 0x20b404u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x20b408: 0x91ea0000  lbu         $t2, 0x0($t7)
    ctx->pc = 0x20b408u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x20b40c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x20b40cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x20b410: 0x91a90000  lbu         $t1, 0x0($t5)
    ctx->pc = 0x20b410u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x20b414: 0x791821  addu        $v1, $v1, $t9
    ctx->pc = 0x20b414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 25)));
    // 0x20b418: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x20b418u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x20b41c: 0x8c6b0000  lw          $t3, 0x0($v1)
    ctx->pc = 0x20b41cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20b420: 0xa10c0  sll         $v0, $t2, 3
    ctx->pc = 0x20b420u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x20b424: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x20b424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x20b428: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x20b428u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x20b42c: 0xdc860000  ld          $a2, 0x0($a0)
    ctx->pc = 0x20b42cu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x20b430: 0x12b1821  addu        $v1, $t1, $t3
    ctx->pc = 0x20b430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 11)));
    // 0x20b434: 0xdc450000  ld          $a1, 0x0($v0)
    ctx->pc = 0x20b434u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20b438: 0x1831821  addu        $v1, $t4, $v1
    ctx->pc = 0x20b438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
    // 0x20b43c: 0xa1080  sll         $v0, $t2, 2
    ctx->pc = 0x20b43cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x20b440: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x20b440u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20b444: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x20b444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x20b448: 0xa6282d  daddu       $a1, $a1, $a2
    ctx->pc = 0x20b448u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 6));
    // 0x20b44c: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x20b44cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20b450: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x20b450u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x20b454: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x20b454u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x20b458: 0xa0e40000  sb          $a0, 0x0($a3)
    ctx->pc = 0x20b458u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x20b45c: 0x1251021  addu        $v0, $t1, $a1
    ctx->pc = 0x20b45cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x20b460: 0x1821021  addu        $v0, $t4, $v0
    ctx->pc = 0x20b460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x20b464: 0x1261821  addu        $v1, $t1, $a2
    ctx->pc = 0x20b464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
    // 0x20b468: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x20b468u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20b46c: 0x1831821  addu        $v1, $t4, $v1
    ctx->pc = 0x20b46cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
    // 0x20b470: 0xa0e40001  sb          $a0, 0x1($a3)
    ctx->pc = 0x20b470u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x20b474: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x20b474u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20b478: 0xa0e20002  sb          $v0, 0x2($a3)
    ctx->pc = 0x20b478u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x20b47c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x20b47cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_20b480:
    // 0x20b480: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x20b480u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20b484: 0x7bb20000  lq          $s2, 0x0($sp)
    ctx->pc = 0x20b484u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20b488: 0x3e00008  jr          $ra
    ctx->pc = 0x20B488u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20B48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B488u;
        // 0x20b48c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20B488u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20B490u;
}
