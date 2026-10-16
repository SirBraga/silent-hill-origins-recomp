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

// Function: sub_002E6F28
// Address: 0x2e6f28 - 0x2e7150
void sub_002E6F28_0x2e6f28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E6F28_0x2e6f28");
#endif

    switch (ctx->pc) {
        case 0x2e6f88u: goto label_2e6f88;
        case 0x2e7038u: goto label_2e7038;
        case 0x2e7080u: goto label_2e7080;
        default: break;
    }

    ctx->pc = 0x2e6f28u;

    // 0x2e6f28: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2e6f28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2e6f2c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2e6f2cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6f30: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x2e6f30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x2e6f34: 0x3a0482d  daddu       $t1, $sp, $zero
    ctx->pc = 0x2e6f34u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6f38: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x2e6f38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x2e6f3c: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x2e6f3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x2e6f40: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x2e6f40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x2e6f44: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2e6f44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2e6f48: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x2e6f48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x2e6f4c: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x2e6f4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x2e6f50: 0x8c8b0010  lw          $t3, 0x10($a0)
    ctx->pc = 0x2e6f50u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2e6f54: 0x8d670000  lw          $a3, 0x0($t3)
    ctx->pc = 0x2e6f54u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x2e6f58: 0x2568001c  addiu       $t0, $t3, 0x1C
    ctx->pc = 0x2e6f58u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 11), 28));
    // 0x2e6f5c: 0x71a02  srl         $v1, $a3, 8
    ctx->pc = 0x2e6f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), 8));
    // 0x2e6f60: 0x72602  srl         $a0, $a3, 24
    ctx->pc = 0x2e6f60u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 7), 24));
    // 0x2e6f64: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2e6f64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2e6f68: 0x30e2ff00  andi        $v0, $a3, 0xFF00
    ctx->pc = 0x2e6f68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65280);
    // 0x2e6f6c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2e6f6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2e6f70: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x2e6f70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2e6f74: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x2e6f74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x2e6f78: 0x71e00  sll         $v1, $a3, 24
    ctx->pc = 0x2e6f78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 24));
    // 0x2e6f7c: 0x833825  or          $a3, $a0, $v1
    ctx->pc = 0x2e6f7cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2e6f80: 0x24f2fffe  addiu       $s2, $a3, -0x2
    ctx->pc = 0x2e6f80u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967294));
    // 0x2e6f84: 0x0  nop
    ctx->pc = 0x2e6f84u;
    // NOP
label_2e6f88:
    // 0x2e6f88: 0x85070000  lh          $a3, 0x0($t0)
    ctx->pc = 0x2e6f88u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2e6f8c: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x2e6f8cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x2e6f90: 0x25080002  addiu       $t0, $t0, 0x2
    ctx->pc = 0x2e6f90u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
    // 0x2e6f94: 0x2d440010  sltiu       $a0, $t2, 0x10
    ctx->pc = 0x2e6f94u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x2e6f98: 0x30e300ff  andi        $v1, $a3, 0xFF
    ctx->pc = 0x2e6f98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x2e6f9c: 0x30e2ff00  andi        $v0, $a3, 0xFF00
    ctx->pc = 0x2e6f9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65280);
    // 0x2e6fa0: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x2e6fa0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x2e6fa4: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x2e6fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2e6fa8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2e6fa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2e6fac: 0xa5220000  sh          $v0, 0x0($t1)
    ctx->pc = 0x2e6facu;
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x2e6fb0: 0x1480fff5  bnez        $a0, . + 4 + (-0xB << 2)
    ctx->pc = 0x2E6FB0u;
    {
        const bool branch_taken_0x2e6fb0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E6FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6FB0u;
        // 0x2e6fb4: 0x25290002  addiu       $t1, $t1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6fb0) {
            ctx->pc = 0x2E6F88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e6f88;
        }
    }
    ctx->pc = 0x2E6FB8u;
    // 0x2e6fb8: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x2e6fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2e6fbc: 0x2642000d  addiu       $v0, $s2, 0xD
    ctx->pc = 0x2e6fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 13));
    // 0x2e6fc0: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x2e6fc0u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2e6fc4: 0x85670040  lh          $a3, 0x40($t3)
    ctx->pc = 0x2e6fc4u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 64)));
    // 0x2e6fc8: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2E6FC8u;
    {
        const bool branch_taken_0x2e6fc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e6fc8) {
            ctx->pc = 0x2E6FCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E6FC8u;
            // 0x2e6fcc: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E6FD0u;
            goto label_2e6fd0;
        }
    }
    ctx->pc = 0x2E6FD0u;
label_2e6fd0:
    // 0x2e6fd0: 0xc0602d  daddu       $t4, $a2, $zero
    ctx->pc = 0x2e6fd0u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6fd4: 0x30e200ff  andi        $v0, $a3, 0xFF
    ctx->pc = 0x2e6fd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x2e6fd8: 0x30e3ff00  andi        $v1, $a3, 0xFF00
    ctx->pc = 0x2e6fd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65280);
    // 0x2e6fdc: 0x85670042  lh          $a3, 0x42($t3)
    ctx->pc = 0x2e6fdcu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 66)));
    // 0x2e6fe0: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x2e6fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2e6fe4: 0x31a03  sra         $v1, $v1, 8
    ctx->pc = 0x2e6fe4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 8));
    // 0x2e6fe8: 0xa0682d  daddu       $t5, $a1, $zero
    ctx->pc = 0x2e6fe8u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e6fec: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2e6fecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2e6ff0: 0x30e400ff  andi        $a0, $a3, 0xFF
    ctx->pc = 0x2e6ff0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x2e6ff4: 0x30e2ff00  andi        $v0, $a3, 0xFF00
    ctx->pc = 0x2e6ff4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65280);
    // 0x2e6ff8: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2e6ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2e6ffc: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x2e6ffcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x2e7000: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x2e7000u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x2e7004: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2e7004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2e7008: 0x37c03  sra         $t7, $v1, 16
    ctx->pc = 0x2e7008u;
    SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 3), 16));
    // 0x2e700c: 0xa58f0000  sh          $t7, 0x0($t4)
    ctx->pc = 0x2e700cu;
    WRITE16(ADD32(GPR_U32(ctx, 12), 0), (uint16_t)GPR_U32(ctx, 15));
    // 0x2e7010: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x2e7010u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x2e7014: 0x258c0002  addiu       $t4, $t4, 0x2
    ctx->pc = 0x2e7014u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 2));
    // 0x2e7018: 0x25c03  sra         $t3, $v0, 16
    ctx->pc = 0x2e7018u;
    SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 2), 16));
    // 0x2e701c: 0xa58b0000  sh          $t3, 0x0($t4)
    ctx->pc = 0x2e701cu;
    WRITE16(ADD32(GPR_U32(ctx, 12), 0), (uint16_t)GPR_U32(ctx, 11));
    // 0x2e7020: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2e7020u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7024: 0xa812  mflo        $s5
    ctx->pc = 0x2e7024u;
    SET_GPR_U64(ctx, 21, ctx->lo);
    // 0x2e7028: 0x12a00040  beqz        $s5, . + 4 + (0x40 << 2)
    ctx->pc = 0x2E7028u;
    {
        const bool branch_taken_0x2e7028 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E702Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7028u;
        // 0x2e702c: 0x258c0002  addiu       $t4, $t4, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7028) {
            ctx->pc = 0x2E712Cu;
            goto label_2e712c;
        }
    }
    ctx->pc = 0x2E7030u;
    // 0x2e7030: 0x2416000d  addiu       $s6, $zero, 0xD
    ctx->pc = 0x2e7030u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2e7034: 0x91a20000  lbu         $v0, 0x0($t5)
    ctx->pc = 0x2e7034u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 0)));
label_2e7038:
    // 0x2e7038: 0x2d2302b  sltu        $a2, $s6, $s2
    ctx->pc = 0x2e7038u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x2e703c: 0x2411000e  addiu       $s1, $zero, 0xE
    ctx->pc = 0x2e703cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2e7040: 0x25540001  addiu       $s4, $t2, 0x1
    ctx->pc = 0x2e7040u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x2e7044: 0x3050000f  andi        $s0, $v0, 0xF
    ctx->pc = 0x2e7044u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x2e7048: 0x246880a  movz        $s1, $s2, $a2
    ctx->pc = 0x2e7048u;
    if (GPR_U64(ctx, 6) == 0) SET_GPR_U64(ctx, 17, GPR_U64(ctx, 18));
    // 0x2e704c: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x2e704cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x2e7050: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x2e7050u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x2e7054: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2e7054u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2e7058: 0x2519023  subu        $s2, $s2, $s1
    ctx->pc = 0x2e7058u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
    // 0x2e705c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2e705cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7060: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x2e7060u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7064: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x2e7064u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x2e7068: 0x3a22021  addu        $a0, $sp, $v0
    ctx->pc = 0x2e7068u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x2e706c: 0x3a32821  addu        $a1, $sp, $v1
    ctx->pc = 0x2e706cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x2e7070: 0x84990000  lh          $t9, 0x0($a0)
    ctx->pc = 0x2e7070u;
    SET_GPR_S32(ctx, 25, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e7074: 0x12200029  beqz        $s1, . + 4 + (0x29 << 2)
    ctx->pc = 0x2E7074u;
    {
        const bool branch_taken_0x2e7074 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7074u;
        // 0x2e7078: 0x84b80000  lh          $t8, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 24, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7074) {
            ctx->pc = 0x2E711Cu;
            goto label_2e711c;
        }
    }
    ctx->pc = 0x2E707Cu;
    // 0x2e707c: 0x24137fff  addiu       $s3, $zero, 0x7FFF
    ctx->pc = 0x2e707cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
label_2e7080:
    // 0x2e7080: 0x31c20001  andi        $v0, $t6, 0x1
    ctx->pc = 0x2e7080u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)1);
    // 0x2e7084: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2E7084u;
    {
        const bool branch_taken_0x2e7084 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E7088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7084u;
        // 0x2e7088: 0x91a20000  lbu         $v0, 0x0($t5) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7084) {
            ctx->pc = 0x2E70C8u;
            goto label_2e70c8;
        }
    }
    ctx->pc = 0x2E708Cu;
    // 0x2e708c: 0x32b1818  mult        $v1, $t9, $t3
    ctx->pc = 0x2e708cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 25) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2e7090: 0x30f2018  mult        $a0, $t8, $t7
    ctx->pc = 0x2e7090u;
    { int64_t result = (int64_t)GPR_S32(ctx, 24) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2e7094: 0x34068000  ori         $a2, $zero, 0x8000
    ctx->pc = 0x2e7094u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2e7098: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x2e7098u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x2e709c: 0x24057fff  addiu       $a1, $zero, 0x7FFF
    ctx->pc = 0x2e709cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x2e70a0: 0x23f03  sra         $a3, $v0, 28
    ctx->pc = 0x2e70a0u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), 28));
    // 0x2e70a4: 0x160782d  daddu       $t7, $t3, $zero
    ctx->pc = 0x2e70a4u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e70a8: 0x31ac3  sra         $v1, $v1, 11
    ctx->pc = 0x2e70a8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 11));
    // 0x2e70ac: 0x2071004  sllv        $v0, $a3, $s0
    ctx->pc = 0x2e70acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 16) & 0x1F));
    // 0x2e70b0: 0x422c3  sra         $a0, $a0, 11
    ctx->pc = 0x2e70b0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 11));
    // 0x2e70b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e70b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e70b8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2e70b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2e70bc: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x2e70bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2e70c0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2E70C0u;
    {
        const bool branch_taken_0x2e70c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E70C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E70C0u;
        // 0x2e70c4: 0xa2300b  movn        $a2, $a1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e70c0) {
            ctx->pc = 0x2E7104u;
            goto label_2e7104;
        }
    }
    ctx->pc = 0x2E70C8u;
label_2e70c8:
    // 0x2e70c8: 0x32b1818  mult        $v1, $t9, $t3
    ctx->pc = 0x2e70c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 25) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2e70cc: 0x30f5018  mult        $t2, $t8, $t7
    ctx->pc = 0x2e70ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 24) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x2e70d0: 0x34068000  ori         $a2, $zero, 0x8000
    ctx->pc = 0x2e70d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2e70d4: 0x21700  sll         $v0, $v0, 28
    ctx->pc = 0x2e70d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 28));
    // 0x2e70d8: 0x24047fff  addiu       $a0, $zero, 0x7FFF
    ctx->pc = 0x2e70d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x2e70dc: 0x23f03  sra         $a3, $v0, 28
    ctx->pc = 0x2e70dcu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), 28));
    // 0x2e70e0: 0x160782d  daddu       $t7, $t3, $zero
    ctx->pc = 0x2e70e0u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e70e4: 0x31ac3  sra         $v1, $v1, 11
    ctx->pc = 0x2e70e4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 11));
    // 0x2e70e8: 0x2071004  sllv        $v0, $a3, $s0
    ctx->pc = 0x2e70e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 16) & 0x1F));
    // 0x2e70ec: 0xa52c3  sra         $t2, $t2, 11
    ctx->pc = 0x2e70ecu;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 10), 11));
    // 0x2e70f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e70f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e70f4: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x2e70f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x2e70f8: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x2e70f8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x2e70fc: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x2e70fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2e7100: 0x82300b  movn        $a2, $a0, $v0
    ctx->pc = 0x2e7100u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4));
label_2e7104:
    // 0x2e7104: 0xa5860000  sh          $a2, 0x0($t4)
    ctx->pc = 0x2e7104u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x2e7108: 0xc0582d  daddu       $t3, $a2, $zero
    ctx->pc = 0x2e7108u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e710c: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x2e710cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x2e7110: 0x1d1102b  sltu        $v0, $t6, $s1
    ctx->pc = 0x2e7110u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x2e7114: 0x1440ffda  bnez        $v0, . + 4 + (-0x26 << 2)
    ctx->pc = 0x2E7114u;
    {
        const bool branch_taken_0x2e7114 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E7118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7114u;
        // 0x2e7118: 0x258c0002  addiu       $t4, $t4, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7114) {
            ctx->pc = 0x2E7080u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e7080;
        }
    }
    ctx->pc = 0x2E711Cu;
label_2e711c:
    // 0x2e711c: 0x280502d  daddu       $t2, $s4, $zero
    ctx->pc = 0x2e711cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7120: 0x155102b  sltu        $v0, $t2, $s5
    ctx->pc = 0x2e7120u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x2e7124: 0x5440ffc4  bnel        $v0, $zero, . + 4 + (-0x3C << 2)
    ctx->pc = 0x2E7124u;
    {
        const bool branch_taken_0x2e7124 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e7124) {
            ctx->pc = 0x2E7128u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E7124u;
            // 0x2e7128: 0x91a20000  lbu         $v0, 0x0($t5) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E7038u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e7038;
        }
    }
    ctx->pc = 0x2E712Cu;
label_2e712c:
    // 0x2e712c: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x2e712cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2e7130: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x2e7130u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e7134: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x2e7134u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e7138: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x2e7138u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e713c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2e713cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e7140: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x2e7140u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e7144: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x2e7144u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e7148: 0x3e00008  jr          $ra
    ctx->pc = 0x2E7148u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E714Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7148u;
        // 0x2e714c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E7148u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E7150u;
}
