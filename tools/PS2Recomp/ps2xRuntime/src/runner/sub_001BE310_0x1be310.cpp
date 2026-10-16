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

// Function: sub_001BE310
// Address: 0x1be310 - 0x1be3c0
void sub_001BE310_0x1be310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BE310_0x1be310");
#endif

    switch (ctx->pc) {
        case 0x1be34cu: goto label_1be34c;
        case 0x1be394u: goto label_1be394;
        default: break;
    }

    ctx->pc = 0x1be310u;

    // 0x1be310: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1be310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1be314: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1be314u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be318: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1be318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1be31c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1be31cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1be320: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x1be320u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1be324: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1be324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1be328: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1be328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1be32c: 0x8c82036c  lw          $v0, 0x36C($a0)
    ctx->pc = 0x1be32cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 876)));
    // 0x1be330: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BE330u;
    {
        const bool branch_taken_0x1be330 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BE334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE330u;
        // 0x1be334: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be330) {
            ctx->pc = 0x1BE348u;
            goto label_1be348;
        }
    }
    ctx->pc = 0x1BE338u;
    // 0x1be338: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1be338u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be33c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1BE33Cu;
    {
        const bool branch_taken_0x1be33c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE33Cu;
        // 0x1be340: 0x2491036c  addiu       $s1, $a0, 0x36C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 876));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be33c) {
            ctx->pc = 0x1BE370u;
            goto label_1be370;
        }
    }
    ctx->pc = 0x1BE344u;
    // 0x1be344: 0x0  nop
    ctx->pc = 0x1be344u;
    // NOP
label_1be348:
    // 0x1be348: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1be348u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1be34c:
    // 0x1be34c: 0x28c20006  slti        $v0, $a2, 0x6
    ctx->pc = 0x1be34cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x1be350: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BE350u;
    {
        const bool branch_taken_0x1be350 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE350u;
        // 0x1be354: 0x2491036c  addiu       $s1, $a0, 0x36C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 876));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be350) {
            ctx->pc = 0x1BE370u;
            goto label_1be370;
        }
    }
    ctx->pc = 0x1BE358u;
    // 0x1be358: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x1be358u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x1be35c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1be35cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1be360: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1be360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1be364: 0x5460fff9  bnel        $v1, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1BE364u;
    {
        const bool branch_taken_0x1be364 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1be364) {
            ctx->pc = 0x1BE368u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BE364u;
            // 0x1be368: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BE34Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1be34c;
        }
    }
    ctx->pc = 0x1BE36Cu;
    // 0x1be36c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1be36cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1be370:
    // 0x1be370: 0x1280c0  sll         $s0, $s2, 3
    ctx->pc = 0x1be370u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x1be374: 0x3c01420c  lui         $at, 0x420C
    ctx->pc = 0x1be374u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16908 << 16));
    // 0x1be378: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1be378u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1be37c: 0x901021  addu        $v0, $a0, $s0
    ctx->pc = 0x1be37cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x1be380: 0x3c013fc5  lui         $at, 0x3FC5
    ctx->pc = 0x1be380u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16325 << 16));
    // 0x1be384: 0x3421abbf  ori         $at, $at, 0xABBF
    ctx->pc = 0x1be384u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43967);
    // 0x1be388: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1be388u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1be38c: 0xc07c41e  jal         func_1F1078
    ctx->pc = 0x1BE38Cu;
    SET_GPR_U32(ctx, 31, 0x1BE394u);
    ctx->pc = 0x1BE390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE38Cu;
    // 0x1be390: 0x8c440368  lw          $a0, 0x368($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F1078u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F1078u, 0x1BE38Cu, 0x1BE394u)) {
        return;
    }
    ctx->pc = 0x1BE394u;
label_1be394:
    // 0x1be394: 0x2308021  addu        $s0, $s1, $s0
    ctx->pc = 0x1be394u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x1be398: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1be398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1be39c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1be39cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1be3a0: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1be3a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be3a4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1be3a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1be3a8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1be3a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1be3ac: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1be3acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1be3b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1be3b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1be3b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1BE3B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BE3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE3B4u;
        // 0x1be3b8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BE3B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BE3BCu;
    // 0x1be3bc: 0x0  nop
    ctx->pc = 0x1be3bcu;
    // NOP
    ctx->pc = 0x1be3c0u;
}
