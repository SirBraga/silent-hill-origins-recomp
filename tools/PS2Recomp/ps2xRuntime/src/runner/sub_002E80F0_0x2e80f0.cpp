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

// Function: sub_002E80F0
// Address: 0x2e80f0 - 0x2e8200
void sub_002E80F0_0x2e80f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E80F0_0x2e80f0");
#endif

    switch (ctx->pc) {
        case 0x2e8128u: goto label_2e8128;
        case 0x2e8160u: goto label_2e8160;
        default: break;
    }

    ctx->pc = 0x2e80f0u;

    // 0x2e80f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e80f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e80f4: 0xa0582d  daddu       $t3, $a1, $zero
    ctx->pc = 0x2e80f4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e80f8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2e80f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2e80fc: 0x80602d  daddu       $t4, $a0, $zero
    ctx->pc = 0x2e80fcu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8100: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e8100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e8104: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e8104u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8108: 0x7fb20000  sq          $s2, 0x0($sp)
    ctx->pc = 0x2e8108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 18));
    // 0x2e810c: 0x10c00036  beqz        $a2, . + 4 + (0x36 << 2)
    ctx->pc = 0x2E810Cu;
    {
        const bool branch_taken_0x2e810c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E810Cu;
        // 0x2e8110: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e810c) {
            ctx->pc = 0x2E81E8u;
            goto label_2e81e8;
        }
    }
    ctx->pc = 0x2E8114u;
    // 0x2e8114: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x2e8114u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x2e8118: 0x2412001c  addiu       $s2, $zero, 0x1C
    ctx->pc = 0x2e8118u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x2e811c: 0x245053d8  addiu       $s0, $v0, 0x53D8
    ctx->pc = 0x2e811cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 21464));
    // 0x2e8120: 0x26110004  addiu       $s1, $s0, 0x4
    ctx->pc = 0x2e8120u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2e8124: 0x0  nop
    ctx->pc = 0x2e8124u;
    // NOP
label_2e8128:
    // 0x2e8128: 0x91820000  lbu         $v0, 0x0($t4)
    ctx->pc = 0x2e8128u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x2e812c: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x2e812cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8130: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x2e8130u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8134: 0x24d9ffff  addiu       $t9, $a2, -0x1
    ctx->pc = 0x2e8134u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x2e8138: 0x21902  srl         $v1, $v0, 4
    ctx->pc = 0x2e8138u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x2e813c: 0x258c0002  addiu       $t4, $t4, 0x2
    ctx->pc = 0x2e813cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 2));
    // 0x2e8140: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2e8140u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2e8144: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x2e8144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x2e8148: 0x712021  addu        $a0, $v1, $s1
    ctx->pc = 0x2e8148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x2e814c: 0x2427823  subu        $t7, $s2, $v0
    ctx->pc = 0x2e814cu;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2e8150: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2e8150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2e8154: 0x8c8d0000  lw          $t5, 0x0($a0)
    ctx->pc = 0x2e8154u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e8158: 0x8c6e0000  lw          $t6, 0x0($v1)
    ctx->pc = 0x2e8158u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e815c: 0x2418000d  addiu       $t8, $zero, 0xD
    ctx->pc = 0x2e815cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_2e8160:
    // 0x2e8160: 0x91820000  lbu         $v0, 0x0($t4)
    ctx->pc = 0x2e8160u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x2e8164: 0x10d5018  mult        $t2, $t0, $t5
    ctx->pc = 0x2e8164u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x2e8168: 0xee4818  mult        $t1, $a3, $t6
    ctx->pc = 0x2e8168u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x2e816c: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x2e816cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8170: 0x21700  sll         $v0, $v0, 28
    ctx->pc = 0x2e8170u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 28));
    // 0x2e8174: 0x10d2818  mult        $a1, $t0, $t5
    ctx->pc = 0x2e8174u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2e8178: 0x21703  sra         $v0, $v0, 28
    ctx->pc = 0x2e8178u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 28));
    // 0x2e817c: 0x2718ffff  addiu       $t8, $t8, -0x1
    ctx->pc = 0x2e817cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 4294967295));
    // 0x2e8180: 0x1e21004  sllv        $v0, $v0, $t7
    ctx->pc = 0x2e8180u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 15) & 0x1F));
    // 0x2e8184: 0x12a2021  addu        $a0, $t1, $t2
    ctx->pc = 0x2e8184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x2e8188: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2e8188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2e818c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x2e818cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x2e8190: 0xa5620000  sh          $v0, 0x0($t3)
    ctx->pc = 0x2e8190u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x2e8194: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2e8194u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8198: 0xee2018  mult        $a0, $a3, $t6
    ctx->pc = 0x2e8198u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2e819c: 0x256b0002  addiu       $t3, $t3, 0x2
    ctx->pc = 0x2e819cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 2));
    // 0x2e81a0: 0x91820000  lbu         $v0, 0x0($t4)
    ctx->pc = 0x2e81a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x2e81a4: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x2e81a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e81a8: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x2e81a8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x2e81ac: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x2e81acu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x2e81b0: 0x21f00  sll         $v1, $v0, 28
    ctx->pc = 0x2e81b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 28));
    // 0x2e81b4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2e81b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2e81b8: 0x31703  sra         $v0, $v1, 28
    ctx->pc = 0x2e81b8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 28));
    // 0x2e81bc: 0x1e21004  sllv        $v0, $v0, $t7
    ctx->pc = 0x2e81bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 15) & 0x1F));
    // 0x2e81c0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2e81c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2e81c4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x2e81c4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x2e81c8: 0xa5620000  sh          $v0, 0x0($t3)
    ctx->pc = 0x2e81c8u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x2e81cc: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2e81ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e81d0: 0x701ffe3  bgez        $t8, . + 4 + (-0x1D << 2)
    ctx->pc = 0x2E81D0u;
    {
        const bool branch_taken_0x2e81d0 = (GPR_S64(ctx, 24) >= 0);
        ctx->pc = 0x2E81D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E81D0u;
        // 0x2e81d4: 0x256b0002  addiu       $t3, $t3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e81d0) {
            ctx->pc = 0x2E8160u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e8160;
        }
    }
    ctx->pc = 0x2E81D8u;
    // 0x2e81d8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2e81d8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e81dc: 0x320302d  daddu       $a2, $t9, $zero
    ctx->pc = 0x2e81dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e81e0: 0x14c0ffd1  bnez        $a2, . + 4 + (-0x2F << 2)
    ctx->pc = 0x2E81E0u;
    {
        const bool branch_taken_0x2e81e0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E81E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E81E0u;
        // 0x2e81e4: 0x100282d  daddu       $a1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e81e0) {
            ctx->pc = 0x2E8128u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e8128;
        }
    }
    ctx->pc = 0x2E81E8u;
label_2e81e8:
    // 0x2e81e8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2e81e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e81ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e81ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e81f0: 0x7bb20000  lq          $s2, 0x0($sp)
    ctx->pc = 0x2e81f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e81f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2E81F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E81F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E81F4u;
        // 0x2e81f8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E81F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E81FCu;
    // 0x2e81fc: 0x0  nop
    ctx->pc = 0x2e81fcu;
    // NOP
    ctx->pc = 0x2e8200u;
}
