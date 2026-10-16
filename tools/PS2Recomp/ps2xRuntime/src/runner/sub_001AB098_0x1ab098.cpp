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

// Function: sub_001AB098
// Address: 0x1ab098 - 0x1ab178
void sub_001AB098_0x1ab098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AB098_0x1ab098");
#endif

    switch (ctx->pc) {
        case 0x1ab100u: goto label_1ab100;
        default: break;
    }

    ctx->pc = 0x1ab098u;

    // 0x1ab098: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1ab098u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1ab09c: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x1ab09cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x1ab0a0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1ab0a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1ab0a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ab0a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab0a8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1ab0a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1ab0ac: 0x244281b0  addiu       $v0, $v0, -0x7E50
    ctx->pc = 0x1ab0acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934960));
    // 0x1ab0b0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ab0b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ab0b4: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x1ab0b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab0b8: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x1ab0b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab0bc: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1ab0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6F81B8u));
    // 0x1ab0c0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1AB0C0u;
    {
        const bool branch_taken_0x1ab0c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB0C0u;
        // 0x1ab0c4: 0x94a60044  lhu         $a2, 0x44($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab0c0) {
            ctx->pc = 0x1AB0D8u;
            goto label_1ab0d8;
        }
    }
    ctx->pc = 0x1AB0C8u;
    // 0x1ab0c8: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1ab0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1ab0cc: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x1ab0ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1ab0d0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AB0D0u;
    {
        const bool branch_taken_0x1ab0d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AB0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB0D0u;
        // 0x1ab0d4: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab0d0) {
            ctx->pc = 0x1AB0E0u;
            goto label_1ab0e0;
        }
    }
    ctx->pc = 0x1AB0D8u;
label_1ab0d8:
    // 0x1ab0d8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1AB0D8u;
    {
        const bool branch_taken_0x1ab0d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB0D8u;
        // 0x1ab0dc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab0d8) {
            ctx->pc = 0x1AB0E8u;
            goto label_1ab0e8;
        }
    }
    ctx->pc = 0x1AB0E0u;
label_1ab0e0:
    // 0x1ab0e0: 0xc23818  mult        $a3, $a2, $v0
    ctx->pc = 0x1ab0e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x1ab0e4: 0xe33021  addu        $a2, $a3, $v1
    ctx->pc = 0x1ab0e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_1ab0e8:
    // 0x1ab0e8: 0x10c0001c  beqz        $a2, . + 4 + (0x1C << 2)
    ctx->pc = 0x1AB0E8u;
    {
        const bool branch_taken_0x1ab0e8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB0E8u;
        // 0x1ab0ec: 0x249081b0  addiu       $s0, $a0, -0x7E50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934960));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab0e8) {
            ctx->pc = 0x1AB15Cu;
            goto label_1ab15c;
        }
    }
    ctx->pc = 0x1AB0F0u;
    // 0x1ab0f0: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x1ab0f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab0f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ab0f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab0f8: 0xc06a066  jal         func_1A8198
    ctx->pc = 0x1AB0F8u;
    SET_GPR_U32(ctx, 31, 0x1AB100u);
    ctx->pc = 0x1AB0FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB0F8u;
    // 0x1ab0fc: 0x3a0402d  daddu       $t0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8198u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A8198u, 0x1AB0F8u, 0x1AB100u)) {
        return;
    }
    ctx->pc = 0x1AB100u;
label_1ab100:
    // 0x1ab100: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1AB100u;
    {
        const bool branch_taken_0x1ab100 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB100u;
        // 0x1ab104: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab100) {
            ctx->pc = 0x1AB15Cu;
            goto label_1ab15c;
        }
    }
    ctx->pc = 0x1AB108u;
    // 0x1ab108: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1AB108u;
    {
        const bool branch_taken_0x1ab108 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB108u;
        // 0x1ab10c: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab108) {
            ctx->pc = 0x1AB150u;
            goto label_1ab150;
        }
    }
    ctx->pc = 0x1AB110u;
    // 0x1ab110: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1ab110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1ab114: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x1AB114u;
    {
        const bool branch_taken_0x1ab114 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ab114) {
            ctx->pc = 0x1AB118u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AB114u;
            // 0x1ab118: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AB150u;
            goto label_1ab150;
        }
    }
    ctx->pc = 0x1AB11Cu;
    // 0x1ab11c: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x1ab11cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ab120: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x1ab120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1ab124: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1ab124u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1ab128: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1AB128u;
    {
        const bool branch_taken_0x1ab128 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ab128) {
            ctx->pc = 0x1AB12Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AB128u;
            // 0x1ab12c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AB130u;
            goto label_1ab130;
        }
    }
    ctx->pc = 0x1AB130u;
label_1ab130:
    // 0x1ab130: 0x2812  mflo        $a1
    ctx->pc = 0x1ab130u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x1ab134: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AB134u;
    {
        const bool branch_taken_0x1ab134 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x1AB138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB134u;
        // 0x1ab138: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab134) {
            ctx->pc = 0x1AB150u;
            goto label_1ab150;
        }
    }
    ctx->pc = 0x1AB13Cu;
    // 0x1ab13c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1ab13cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1ab140: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x1ab140u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1ab144: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x1AB144u;
    {
        const bool branch_taken_0x1ab144 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ab144) {
            ctx->pc = 0x1AB148u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AB144u;
            // 0x1ab148: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AB150u;
            goto label_1ab150;
        }
    }
    ctx->pc = 0x1AB14Cu;
    // 0x1ab14c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1ab14cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1ab150:
    // 0x1ab150: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x1ab150u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x1ab154: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1AB154u;
    {
        const bool branch_taken_0x1ab154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB154u;
        // 0x1ab158: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab154) {
            ctx->pc = 0x1AB160u;
            goto label_1ab160;
        }
    }
    ctx->pc = 0x1AB15Cu;
label_1ab15c:
    // 0x1ab15c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ab15cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ab160:
    // 0x1ab160: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1ab160u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ab164: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1ab164u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ab168: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ab168u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ab16c: 0x3e00008  jr          $ra
    ctx->pc = 0x1AB16Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AB170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB16Cu;
        // 0x1ab170: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AB16Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AB174u;
    // 0x1ab174: 0x0  nop
    ctx->pc = 0x1ab174u;
    // NOP
    ctx->pc = 0x1ab178u;
}
