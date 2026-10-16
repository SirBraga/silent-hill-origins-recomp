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

// Function: sub_002DA800
// Address: 0x2da800 - 0x2da8a0
void sub_002DA800_0x2da800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DA800_0x2da800");
#endif

    ctx->pc = 0x2da800u;

    // 0x2da800: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2da800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2da804: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x2da804u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da808: 0x3c070fff  lui         $a3, 0xFFF
    ctx->pc = 0x2da808u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4095 << 16));
    // 0x2da80c: 0x8d030040  lw          $v1, 0x40($t0)
    ctx->pc = 0x2da80cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 64)));
    // 0x2da810: 0x3a0482d  daddu       $t1, $sp, $zero
    ctx->pc = 0x2da810u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da814: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x2da814u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x2da818: 0xc6480b  movn        $t1, $a2, $a2
    ctx->pc = 0x2da818u;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_U64(ctx, 9, GPR_U64(ctx, 6));
    // 0x2da81c: 0x671024  and         $v0, $v1, $a3
    ctx->pc = 0x2da81cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x2da820: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2DA820u;
    {
        const bool branch_taken_0x2da820 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA820u;
        // 0x2da824: 0x24060028  addiu       $a2, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da820) {
            ctx->pc = 0x2DA854u;
            goto label_2da854;
        }
    }
    ctx->pc = 0x2DA828u;
    // 0x2da828: 0x31702  srl         $v0, $v1, 28
    ctx->pc = 0x2da828u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 28));
    // 0x2da82c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2da82cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2da830: 0x431804  sllv        $v1, $v1, $v0
    ctx->pc = 0x2da830u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x2da834: 0x32023  negu        $a0, $v1
    ctx->pc = 0x2da834u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x2da838: 0x24630027  addiu       $v1, $v1, 0x27
    ctx->pc = 0x2da838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 39));
    // 0x2da83c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2da83cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2da840: 0xad230000  sw          $v1, 0x0($t1)
    ctx->pc = 0x2da840u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
    // 0x2da844: 0x8d020040  lw          $v0, 0x40($t0)
    ctx->pc = 0x2da844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 64)));
    // 0x2da848: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x2da848u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x2da84c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2DA84Cu;
    {
        const bool branch_taken_0x2da84c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA84Cu;
        // 0x2da850: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da84c) {
            ctx->pc = 0x2DA858u;
            goto label_2da858;
        }
    }
    ctx->pc = 0x2DA854u;
label_2da854:
    // 0x2da854: 0xad200000  sw          $zero, 0x0($t1)
    ctx->pc = 0x2da854u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 0));
label_2da858:
    // 0x2da858: 0x30a20002  andi        $v0, $a1, 0x2
    ctx->pc = 0x2da858u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
    // 0x2da85c: 0x24c30004  addiu       $v1, $a2, 0x4
    ctx->pc = 0x2da85cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x2da860: 0x30a40001  andi        $a0, $a1, 0x1
    ctx->pc = 0x2da860u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x2da864: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x2DA864u;
    {
        const bool branch_taken_0x2da864 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA864u;
        // 0x2da868: 0x62300b  movn        $a2, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da864) {
            ctx->pc = 0x2DA890u;
            goto label_2da890;
        }
    }
    ctx->pc = 0x2DA86Cu;
    // 0x2da86c: 0x8d04004c  lw          $a0, 0x4C($t0)
    ctx->pc = 0x2da86cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 76)));
    // 0x2da870: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x2da870u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2da874: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x2da874u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x2da878: 0x9482000c  lhu         $v0, 0xC($a0)
    ctx->pc = 0x2da878u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2da87c: 0x9483000e  lhu         $v1, 0xE($a0)
    ctx->pc = 0x2da87cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 14)));
    // 0x2da880: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x2da880u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2da884: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2da884u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2da888: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x2da888u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2da88c: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x2da88cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_2da890:
    // 0x2da890: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x2da890u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da894: 0x3e00008  jr          $ra
    ctx->pc = 0x2DA894u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DA898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA894u;
        // 0x2da898: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DA894u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DA89Cu;
    // 0x2da89c: 0x0  nop
    ctx->pc = 0x2da89cu;
    // NOP
    ctx->pc = 0x2da8a0u;
}
