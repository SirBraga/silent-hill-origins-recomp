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

// Function: sub_0021D8C0
// Address: 0x21d8c0 - 0x21dab8
void sub_0021D8C0_0x21d8c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021D8C0_0x21d8c0");
#endif

    switch (ctx->pc) {
        case 0x21d918u: goto label_21d918;
        case 0x21d958u: goto label_21d958;
        case 0x21da20u: goto label_21da20;
        case 0x21da30u: goto label_21da30;
        case 0x21da50u: goto label_21da50;
        case 0x21da78u: goto label_21da78;
        default: break;
    }

    ctx->pc = 0x21d8c0u;

    // 0x21d8c0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x21d8c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x21d8c4: 0xc0c82d  daddu       $t9, $a2, $zero
    ctx->pc = 0x21d8c4u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d8c8: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x21d8c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x21d8cc: 0xe0782d  daddu       $t7, $a3, $zero
    ctx->pc = 0x21d8ccu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d8d0: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x21d8d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x21d8d4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x21d8d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d8d8: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x21d8d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x21d8dc: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x21d8dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x21d8e0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x21d8e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x21d8e4: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x21d8e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x21d8e8: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x21d8e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x21d8ec: 0x7fb60000  sq          $s6, 0x0($sp)
    ctx->pc = 0x21d8ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 22));
    // 0x21d8f0: 0x8c8201c8  lw          $v0, 0x1C8($a0)
    ctx->pc = 0x21d8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 456)));
    // 0x21d8f4: 0x8c8c0144  lw          $t4, 0x144($a0)
    ctx->pc = 0x21d8f4u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 324)));
    // 0x21d8f8: 0x8c910070  lw          $s1, 0x70($a0)
    ctx->pc = 0x21d8f8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x21d8fc: 0x8c560014  lw          $s6, 0x14($v0)
    ctx->pc = 0x21d8fcu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x21d900: 0x8c550008  lw          $s5, 0x8($v0)
    ctx->pc = 0x21d900u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x21d904: 0x8c54000c  lw          $s4, 0xC($v0)
    ctx->pc = 0x21d904u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x21d908: 0x500003b  bltz        $t0, . + 4 + (0x3B << 2)
    ctx->pc = 0x21D908u;
    {
        const bool branch_taken_0x21d908 = (GPR_S64(ctx, 8) < 0);
        ctx->pc = 0x21D90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D908u;
        // 0x21d90c: 0x8c530010  lw          $s3, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d908) {
            ctx->pc = 0x21D9F8u;
            goto label_21d9f8;
        }
    }
    ctx->pc = 0x21D910u;
    // 0x21d910: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x21d910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x21d914: 0x0  nop
    ctx->pc = 0x21d914u;
    // NOP
label_21d918:
    // 0x21d918: 0x191080  sll         $v0, $t9, 2
    ctx->pc = 0x21d918u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 25), 2));
    // 0x21d91c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x21d91cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x21d920: 0x2512ffff  addiu       $s2, $t0, -0x1
    ctx->pc = 0x21d920u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x21d924: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x21d924u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x21d928: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x21d928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21d92c: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x21d92cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x21d930: 0x8deb0000  lw          $t3, 0x0($t7)
    ctx->pc = 0x21d930u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x21d934: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x21d934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x21d938: 0x8c780000  lw          $t8, 0x0($v1)
    ctx->pc = 0x21d938u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21d93c: 0x8c8e0000  lw          $t6, 0x0($a0)
    ctx->pc = 0x21d93cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x21d940: 0x27390001  addiu       $t9, $t9, 0x1
    ctx->pc = 0x21d940u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 1));
    // 0x21d944: 0x8c4d0000  lw          $t5, 0x0($v0)
    ctx->pc = 0x21d944u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21d948: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x21d948u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d94c: 0x12200027  beqz        $s1, . + 4 + (0x27 << 2)
    ctx->pc = 0x21D94Cu;
    {
        const bool branch_taken_0x21d94c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D94Cu;
        // 0x21d950: 0x25ef0004  addiu       $t7, $t7, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d94c) {
            ctx->pc = 0x21D9ECu;
            goto label_21d9ec;
        }
    }
    ctx->pc = 0x21D954u;
    // 0x21d954: 0x0  nop
    ctx->pc = 0x21d954u;
    // NOP
label_21d958:
    // 0x21d958: 0x1aa1021  addu        $v0, $t5, $t2
    ctx->pc = 0x21d958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 10)));
    // 0x21d95c: 0x30a1821  addu        $v1, $t8, $t2
    ctx->pc = 0x21d95cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 10)));
    // 0x21d960: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x21d960u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21d964: 0x1ca2021  addu        $a0, $t6, $t2
    ctx->pc = 0x21d964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 10)));
    // 0x21d968: 0x90680000  lbu         $t0, 0x0($v1)
    ctx->pc = 0x21d968u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21d96c: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x21d96cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x21d970: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x21d970u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x21d974: 0x90860000  lbu         $a2, 0x0($a0)
    ctx->pc = 0x21d974u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x21d978: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x21d978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x21d97c: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x21d97cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x21d980: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x21d980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21d984: 0x638c0  sll         $a3, $a2, 3
    ctx->pc = 0x21d984u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x21d988: 0xf63821  addu        $a3, $a3, $s6
    ctx->pc = 0x21d988u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 22)));
    // 0x21d98c: 0xb32821  addu        $a1, $a1, $s3
    ctx->pc = 0x21d98cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    // 0x21d990: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x21d990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x21d994: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x21d994u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x21d998: 0x1831821  addu        $v1, $t4, $v1
    ctx->pc = 0x21d998u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
    // 0x21d99c: 0xd43021  addu        $a2, $a2, $s4
    ctx->pc = 0x21d99cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 20)));
    // 0x21d9a0: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x21d9a0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21d9a4: 0x151482b  sltu        $t1, $t2, $s1
    ctx->pc = 0x21d9a4u;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x21d9a8: 0xa1640000  sb          $a0, 0x0($t3)
    ctx->pc = 0x21d9a8u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x21d9ac: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x21d9acu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x21d9b0: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x21d9b0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x21d9b4: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x21d9b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x21d9b8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x21d9b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x21d9bc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x21d9bcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x21d9c0: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x21d9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x21d9c4: 0x1821021  addu        $v0, $t4, $v0
    ctx->pc = 0x21d9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x21d9c8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x21d9c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21d9cc: 0xa1630001  sb          $v1, 0x1($t3)
    ctx->pc = 0x21d9ccu;
    WRITE8(ADD32(GPR_U32(ctx, 11), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x21d9d0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x21d9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x21d9d4: 0x1024021  addu        $t0, $t0, $v0
    ctx->pc = 0x21d9d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x21d9d8: 0x1884021  addu        $t0, $t4, $t0
    ctx->pc = 0x21d9d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 8)));
    // 0x21d9dc: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x21d9dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x21d9e0: 0xa1620002  sb          $v0, 0x2($t3)
    ctx->pc = 0x21d9e0u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x21d9e4: 0x1520ffdc  bnez        $t1, . + 4 + (-0x24 << 2)
    ctx->pc = 0x21D9E4u;
    {
        const bool branch_taken_0x21d9e4 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x21D9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D9E4u;
        // 0x21d9e8: 0x256b0004  addiu       $t3, $t3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d9e4) {
            ctx->pc = 0x21D958u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21d958;
        }
    }
    ctx->pc = 0x21D9ECu;
label_21d9ec:
    // 0x21d9ec: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x21d9ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d9f0: 0x503ffc9  bgezl       $t0, . + 4 + (-0x37 << 2)
    ctx->pc = 0x21D9F0u;
    {
        const bool branch_taken_0x21d9f0 = (GPR_S64(ctx, 8) >= 0);
        if (branch_taken_0x21d9f0) {
            ctx->pc = 0x21D9F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21D9F0u;
            // 0x21d9f4: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21D918u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21d918;
        }
    }
    ctx->pc = 0x21D9F8u;
label_21d9f8:
    // 0x21d9f8: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x21d9f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x21d9fc: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x21d9fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x21da00: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x21da00u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21da04: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x21da04u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21da08: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x21da08u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21da0c: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x21da0cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21da10: 0x7bb60000  lq          $s6, 0x0($sp)
    ctx->pc = 0x21da10u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21da14: 0x3e00008  jr          $ra
    ctx->pc = 0x21DA14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21DA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DA14u;
        // 0x21da18: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21DA14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21DA1Cu;
    // 0x21da1c: 0x0  nop
    ctx->pc = 0x21da1cu;
    // NOP
label_21da20:
    // 0x21da20: 0x8c8e0070  lw          $t6, 0x70($a0)
    ctx->pc = 0x21da20u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x21da24: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x21da24u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x21da28: 0x5000020  bltz        $t0, . + 4 + (0x20 << 2)
    ctx->pc = 0x21DA28u;
    {
        const bool branch_taken_0x21da28 = (GPR_S64(ctx, 8) < 0);
        ctx->pc = 0x21DA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DA28u;
        // 0x21da2c: 0x8c8a0024  lw          $t2, 0x24($a0) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21da28) {
            ctx->pc = 0x21DAACu;
            goto label_21daac;
        }
    }
    ctx->pc = 0x21DA30u;
label_21da30:
    // 0x21da30: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x21da30u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x21da34: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x21da34u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21da38: 0x24cd0001  addiu       $t5, $a2, 0x1
    ctx->pc = 0x21da38u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x21da3c: 0x19400018  blez        $t2, . + 4 + (0x18 << 2)
    ctx->pc = 0x21DA3Cu;
    {
        const bool branch_taken_0x21da3c = (GPR_S64(ctx, 10) <= 0);
        ctx->pc = 0x21DA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DA3Cu;
        // 0x21da40: 0x24ec0004  addiu       $t4, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21da3c) {
            ctx->pc = 0x21DAA0u;
            goto label_21daa0;
        }
    }
    ctx->pc = 0x21DA44u;
    // 0x21da44: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x21da44u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x21da48: 0x91080  sll         $v0, $t1, 2
    ctx->pc = 0x21da48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x21da4c: 0x0  nop
    ctx->pc = 0x21da4cu;
    // NOP
label_21da50:
    // 0x21da50: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x21da50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x21da54: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x21da54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x21da58: 0x252b0001  addiu       $t3, $t1, 0x1
    ctx->pc = 0x21da58u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x21da5c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x21da5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21da60: 0x892021  addu        $a0, $a0, $t1
    ctx->pc = 0x21da60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x21da64: 0x1c0482d  daddu       $t1, $t6, $zero
    ctx->pc = 0x21da64u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21da68: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x21da68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x21da6c: 0x11200008  beqz        $t1, . + 4 + (0x8 << 2)
    ctx->pc = 0x21DA6Cu;
    {
        const bool branch_taken_0x21da6c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DA6Cu;
        // 0x21da70: 0x8c630000  lw          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21da6c) {
            ctx->pc = 0x21DA90u;
            goto label_21da90;
        }
    }
    ctx->pc = 0x21DA74u;
    // 0x21da74: 0x0  nop
    ctx->pc = 0x21da74u;
    // NOP
label_21da78:
    // 0x21da78: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x21da78u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21da7c: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x21da7cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x21da80: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x21da80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x21da84: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x21da84u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x21da88: 0x1520fffb  bnez        $t1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x21DA88u;
    {
        const bool branch_taken_0x21da88 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x21DA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DA88u;
        // 0x21da8c: 0x8a2021  addu        $a0, $a0, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21da88) {
            ctx->pc = 0x21DA78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21da78;
        }
    }
    ctx->pc = 0x21DA90u;
label_21da90:
    // 0x21da90: 0x160482d  daddu       $t1, $t3, $zero
    ctx->pc = 0x21da90u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21da94: 0x12a102a  slt         $v0, $t1, $t2
    ctx->pc = 0x21da94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x21da98: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x21DA98u;
    {
        const bool branch_taken_0x21da98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21DA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DA98u;
        // 0x21da9c: 0x91080  sll         $v0, $t1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21da98) {
            ctx->pc = 0x21DA50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21da50;
        }
    }
    ctx->pc = 0x21DAA0u;
label_21daa0:
    // 0x21daa0: 0x1a0302d  daddu       $a2, $t5, $zero
    ctx->pc = 0x21daa0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21daa4: 0x501ffe2  bgez        $t0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x21DAA4u;
    {
        const bool branch_taken_0x21daa4 = (GPR_S64(ctx, 8) >= 0);
        ctx->pc = 0x21DAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DAA4u;
        // 0x21daa8: 0x180382d  daddu       $a3, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21daa4) {
            ctx->pc = 0x21DA30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21da30;
        }
    }
    ctx->pc = 0x21DAACu;
label_21daac:
    // 0x21daac: 0x3e00008  jr          $ra
    ctx->pc = 0x21DAACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21DAACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21DAB4u;
    // 0x21dab4: 0x0  nop
    ctx->pc = 0x21dab4u;
    // NOP
    ctx->pc = 0x21dab8u;
}
