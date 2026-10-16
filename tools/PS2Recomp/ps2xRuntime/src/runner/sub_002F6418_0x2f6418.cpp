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

// Function: sub_002F6418
// Address: 0x2f6418 - 0x2f64e0
void sub_002F6418_0x2f6418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F6418_0x2f6418");
#endif

    switch (ctx->pc) {
        case 0x2f6438u: goto label_2f6438;
        case 0x2f6458u: goto label_2f6458;
        case 0x2f647cu: goto label_2f647c;
        case 0x2f64bcu: goto label_2f64bc;
        default: break;
    }

    ctx->pc = 0x2f6418u;

    // 0x2f6418: 0x27bdfd30  addiu       $sp, $sp, -0x2D0
    ctx->pc = 0x2f6418u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966576));
    // 0x2f641c: 0xffb102a0  sd          $s1, 0x2A0($sp)
    ctx->pc = 0x2f641cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 672), GPR_U64(ctx, 17));
    // 0x2f6420: 0xffb202b0  sd          $s2, 0x2B0($sp)
    ctx->pc = 0x2f6420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 688), GPR_U64(ctx, 18));
    // 0x2f6424: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2f6424u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6428: 0xffbf02c0  sd          $ra, 0x2C0($sp)
    ctx->pc = 0x2f6428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 704), GPR_U64(ctx, 31));
    // 0x2f642c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2f642cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6430: 0xc0bce62  jal         func_2F3988
    ctx->pc = 0x2F6430u;
    SET_GPR_U32(ctx, 31, 0x2F6438u);
    ctx->pc = 0x2F6434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6430u;
    // 0x2f6434: 0xffb00290  sd          $s0, 0x290($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 656), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3988u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F3988u, 0x2F6430u, 0x2F6438u)) {
        return;
    }
    ctx->pc = 0x2F6438u;
label_2f6438:
    // 0x2f6438: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2f6438u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f643c: 0x14600021  bnez        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x2F643Cu;
    {
        const bool branch_taken_0x2f643c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F6440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F643Cu;
        // 0x2f6440: 0xafa20280  sw          $v0, 0x280($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 640), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f643c) {
            ctx->pc = 0x2F64C4u;
            goto label_2f64c4;
        }
    }
    ctx->pc = 0x2F6444u;
    // 0x2f6444: 0x27b00200  addiu       $s0, $sp, 0x200
    ctx->pc = 0x2f6444u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
    // 0x2f6448: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2f6448u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f644c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f644cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6450: 0xc0bce8c  jal         func_2F3A30
    ctx->pc = 0x2F6450u;
    SET_GPR_U32(ctx, 31, 0x2F6458u);
    ctx->pc = 0x2F6454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6450u;
    // 0x2f6454: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3A30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F3A30u, 0x2F6450u, 0x2F6458u)) {
        return;
    }
    ctx->pc = 0x2F6458u;
label_2f6458:
    // 0x2f6458: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2f6458u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f645c: 0x14600019  bnez        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x2F645Cu;
    {
        const bool branch_taken_0x2f645c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F6460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F645Cu;
        // 0x2f6460: 0xafa20280  sw          $v0, 0x280($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 640), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f645c) {
            ctx->pc = 0x2F64C4u;
            goto label_2f64c4;
        }
    }
    ctx->pc = 0x2F6464u;
    // 0x2f6464: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2f6464u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6468: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f6468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f646c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2f646cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6470: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f6470u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6474: 0xc0bcf42  jal         func_2F3D08
    ctx->pc = 0x2F6474u;
    SET_GPR_U32(ctx, 31, 0x2F647Cu);
    ctx->pc = 0x2F6478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6474u;
    // 0x2f6478: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3D08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F3D08u, 0x2F6474u, 0x2F647Cu)) {
        return;
    }
    ctx->pc = 0x2F647Cu;
label_2f647c:
    // 0x2f647c: 0x3c038101  lui         $v1, 0x8101
    ctx->pc = 0x2f647cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33025 << 16));
    // 0x2f6480: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f6480u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6484: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2f6484u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2f6488: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x2F6488u;
    {
        const bool branch_taken_0x2f6488 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2F648Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6488u;
        // 0x2f648c: 0xafa20280  sw          $v0, 0x280($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 640), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6488) {
            ctx->pc = 0x2F64C4u;
            goto label_2f64c4;
        }
    }
    ctx->pc = 0x2F6490u;
    // 0x2f6490: 0x97a20000  lhu         $v0, 0x0($sp)
    ctx->pc = 0x2f6490u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f6494: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x2f6494u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x2f6498: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F6498u;
    {
        const bool branch_taken_0x2f6498 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F649Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6498u;
        // 0x2f649c: 0x8fa50010  lw          $a1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6498) {
            ctx->pc = 0x2F64ACu;
            goto label_2f64ac;
        }
    }
    ctx->pc = 0x2F64A0u;
    // 0x2f64a0: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x2f64a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x2f64a4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2F64A4u;
    {
        const bool branch_taken_0x2f64a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F64A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F64A4u;
        // 0x2f64a8: 0x34420014  ori         $v0, $v0, 0x14 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f64a4) {
            ctx->pc = 0x2F64C4u;
            goto label_2f64c4;
        }
    }
    ctx->pc = 0x2F64ACu;
label_2f64ac:
    // 0x2f64ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f64acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f64b0: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x2f64b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2f64b4: 0xc0bd0c0  jal         func_2F4300
    ctx->pc = 0x2F64B4u;
    SET_GPR_U32(ctx, 31, 0x2F64BCu);
    ctx->pc = 0x2F64B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F64B4u;
    // 0x2f64b8: 0x27a70280  addiu       $a3, $sp, 0x280 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4300u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F4300u, 0x2F64B4u, 0x2F64BCu)) {
        return;
    }
    ctx->pc = 0x2F64BCu;
label_2f64bc:
    // 0x2f64bc: 0x8fa30280  lw          $v1, 0x280($sp)
    ctx->pc = 0x2f64bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x2f64c0: 0x63100b  movn        $v0, $v1, $v1
    ctx->pc = 0x2f64c0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3));
label_2f64c4:
    // 0x2f64c4: 0xdfbf02c0  ld          $ra, 0x2C0($sp)
    ctx->pc = 0x2f64c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x2f64c8: 0xdfb202b0  ld          $s2, 0x2B0($sp)
    ctx->pc = 0x2f64c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x2f64cc: 0xdfb102a0  ld          $s1, 0x2A0($sp)
    ctx->pc = 0x2f64ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x2f64d0: 0xdfb00290  ld          $s0, 0x290($sp)
    ctx->pc = 0x2f64d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x2f64d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2F64D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F64D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F64D4u;
        // 0x2f64d8: 0x27bd02d0  addiu       $sp, $sp, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F64D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F64DCu;
    // 0x2f64dc: 0x0  nop
    ctx->pc = 0x2f64dcu;
    // NOP
    ctx->pc = 0x2f64e0u;
}
