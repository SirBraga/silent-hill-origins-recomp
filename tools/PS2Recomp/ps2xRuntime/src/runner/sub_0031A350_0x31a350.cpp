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

// Function: sub_0031A350
// Address: 0x31a350 - 0x31a3f8
void sub_0031A350_0x31a350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031A350_0x31a350");
#endif

    switch (ctx->pc) {
        case 0x31a380u: goto label_31a380;
        case 0x31a3e8u: goto label_31a3e8;
        default: break;
    }

    ctx->pc = 0x31a350u;

    // 0x31a350: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x31a350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x31a354: 0x457c2  srl         $t2, $a0, 31
    ctx->pc = 0x31a354u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x31a358: 0x11400004  beqz        $t2, . + 4 + (0x4 << 2)
    ctx->pc = 0x31A358u;
    {
        const bool branch_taken_0x31a358 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x31A35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A358u;
        // 0x31a35c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a358) {
            ctx->pc = 0x31A36Cu;
            goto label_31a36c;
        }
    }
    ctx->pc = 0x31A360u;
    // 0x31a360: 0x41823  negu        $v1, $a0
    ctx->pc = 0x31a360u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x31a364: 0x38c2000a  xori        $v0, $a2, 0xA
    ctx->pc = 0x31a364u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)10);
    // 0x31a368: 0x62200a  movz        $a0, $v1, $v0
    ctx->pc = 0x31a368u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3));
label_31a36c:
    // 0x31a36c: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x31a36cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x31a370: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x31a370u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a374: 0x244b7070  addiu       $t3, $v0, 0x7070
    ctx->pc = 0x31a374u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 28784));
    // 0x31a378: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x31a378u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a37c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x31a37cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_31a380:
    // 0x31a380: 0x86001b  divu        $zero, $a0, $a2
    ctx->pc = 0x31a380u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x31a384: 0x50c90001  beql        $a2, $t1, . + 4 + (0x1 << 2)
    ctx->pc = 0x31A384u;
    {
        const bool branch_taken_0x31a384 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 9));
        if (branch_taken_0x31a384) {
            ctx->pc = 0x31A388u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31A384u;
            // 0x31a388: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x31A38Cu;
            goto label_31a38c;
        }
    }
    ctx->pc = 0x31A38Cu;
label_31a38c:
    // 0x31a38c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x31a38cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x31a390: 0x1010  mfhi        $v0
    ctx->pc = 0x31a390u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x31a394: 0x1812  mflo        $v1
    ctx->pc = 0x31a394u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x31a398: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x31a398u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x31a39c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x31a39cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a3a0: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x31a3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x31a3a4: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x31a3a4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x31a3a8: 0xa4e30000  sh          $v1, 0x0($a3)
    ctx->pc = 0x31a3a8u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x31a3ac: 0x50c90001  beql        $a2, $t1, . + 4 + (0x1 << 2)
    ctx->pc = 0x31A3ACu;
    {
        const bool branch_taken_0x31a3ac = (GPR_U64(ctx, 6) == GPR_U64(ctx, 9));
        if (branch_taken_0x31a3ac) {
            ctx->pc = 0x31A3B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31A3ACu;
            // 0x31a3b0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x31A3B4u;
            goto label_31a3b4;
        }
    }
    ctx->pc = 0x31A3B4u;
label_31a3b4:
    // 0x31a3b4: 0x1480fff2  bnez        $a0, . + 4 + (-0xE << 2)
    ctx->pc = 0x31A3B4u;
    {
        const bool branch_taken_0x31a3b4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x31A3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A3B4u;
        // 0x31a3b8: 0x24e70002  addiu       $a3, $a3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a3b4) {
            ctx->pc = 0x31A380u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31a380;
        }
    }
    ctx->pc = 0x31A3BCu;
    // 0x31a3bc: 0x11400005  beqz        $t2, . + 4 + (0x5 << 2)
    ctx->pc = 0x31A3BCu;
    {
        const bool branch_taken_0x31a3bc = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x31A3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A3BCu;
        // 0x31a3c0: 0x81040  sll         $v0, $t0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a3bc) {
            ctx->pc = 0x31A3D4u;
            goto label_31a3d4;
        }
    }
    ctx->pc = 0x31A3C4u;
    // 0x31a3c4: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x31a3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x31a3c8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x31a3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x31a3cc: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x31a3ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x31a3d0: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x31a3d0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
label_31a3d4:
    // 0x31a3d4: 0x81040  sll         $v0, $t0, 1
    ctx->pc = 0x31a3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x31a3d8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x31a3d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a3dc: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x31a3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x31a3e0: 0xc0c68b6  jal         func_31A2D8
    ctx->pc = 0x31A3E0u;
    SET_GPR_U32(ctx, 31, 0x31A3E8u);
    ctx->pc = 0x31A3E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A3E0u;
    // 0x31a3e4: 0xa4400000  sh          $zero, 0x0($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31A2D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31A2D8u, 0x31A3E0u, 0x31A3E8u)) {
        return;
    }
    ctx->pc = 0x31A3E8u;
label_31a3e8:
    // 0x31a3e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31a3e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31a3ec: 0x3e00008  jr          $ra
    ctx->pc = 0x31A3ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31A3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A3ECu;
        // 0x31a3f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31A3ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31A3F4u;
    // 0x31a3f4: 0x0  nop
    ctx->pc = 0x31a3f4u;
    // NOP
    ctx->pc = 0x31a3f8u;
}
