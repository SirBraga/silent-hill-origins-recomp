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

// Function: sub_001BE6C0
// Address: 0x1be6c0 - 0x1be7a8
void sub_001BE6C0_0x1be6c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BE6C0_0x1be6c0");
#endif

    switch (ctx->pc) {
        case 0x1be73cu: goto label_1be73c;
        case 0x1be74cu: goto label_1be74c;
        case 0x1be75cu: goto label_1be75c;
        case 0x1be76cu: goto label_1be76c;
        case 0x1be77cu: goto label_1be77c;
        default: break;
    }

    ctx->pc = 0x1be6c0u;

    // 0x1be6c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1be6c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1be6c4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1be6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1be6c8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1be6c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1be6cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1be6ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1be6d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1be6d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be6d4: 0x2606001c  addiu       $a2, $s0, 0x1C
    ctx->pc = 0x1be6d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x1be6d8: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x1be6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1be6dc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1be6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1be6e0: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1be6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1be6e4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1be6e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1be6e8: 0x54820005  bnel        $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BE6E8u;
    {
        const bool branch_taken_0x1be6e8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1be6e8) {
            ctx->pc = 0x1BE6ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BE6E8u;
            // 0x1be6ec: 0x8e02002c  lw          $v0, 0x2C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BE700u;
            goto label_1be700;
        }
    }
    ctx->pc = 0x1BE6F0u;
    // 0x1be6f0: 0x8e020064  lw          $v0, 0x64($s0)
    ctx->pc = 0x1be6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x1be6f4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1be6f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1be6f8: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x1be6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x1be6fc: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x1be6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_1be700:
    // 0x1be700: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1be700u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1be704: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x1be704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1be708: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1be708u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1be70c: 0x2c830005  sltiu       $v1, $a0, 0x5
    ctx->pc = 0x1be70cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x1be710: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x1BE710u;
    {
        const bool branch_taken_0x1be710 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE710u;
        // 0x1be714: 0x8e050038  lw          $a1, 0x38($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be710) {
            ctx->pc = 0x1BE77Cu;
            goto label_1be77c;
        }
    }
    ctx->pc = 0x1BE718u;
    // 0x1be718: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1be718u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1be71c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1be71cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1be720: 0x2442d750  addiu       $v0, $v0, -0x28B0
    ctx->pc = 0x1be720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956880));
    // 0x1be724: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1be724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1be728: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1be728u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1be72c: 0x800008  jr          $a0
    ctx->pc = 0x1BE72Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BE734u: goto label_1be734;
            case 0x1BE744u: goto label_1be744;
            case 0x1BE754u: goto label_1be754;
            case 0x1BE764u: goto label_1be764;
            case 0x1BE774u: goto label_1be774;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BE72Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1BE734u;
label_1be734:
    // 0x1be734: 0xc06ef46  jal         func_1BBD18
    ctx->pc = 0x1BE734u;
    SET_GPR_U32(ctx, 31, 0x1BE73Cu);
    ctx->pc = 0x1BE738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE734u;
    // 0x1be738: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BBD18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1BBD18u, 0x1BE734u, 0x1BE73Cu)) {
        return;
    }
    ctx->pc = 0x1BE73Cu;
label_1be73c:
    // 0x1be73c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1BE73Cu;
    {
        const bool branch_taken_0x1be73c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE73Cu;
        // 0x1be740: 0x8e02002c  lw          $v0, 0x2C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be73c) {
            ctx->pc = 0x1BE780u;
            goto label_1be780;
        }
    }
    ctx->pc = 0x1BE744u;
label_1be744:
    // 0x1be744: 0xc06efb0  jal         func_1BBEC0
    ctx->pc = 0x1BE744u;
    SET_GPR_U32(ctx, 31, 0x1BE74Cu);
    ctx->pc = 0x1BE748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE744u;
    // 0x1be748: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BBEC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1BBEC0u, 0x1BE744u, 0x1BE74Cu)) {
        return;
    }
    ctx->pc = 0x1BE74Cu;
label_1be74c:
    // 0x1be74c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1BE74Cu;
    {
        const bool branch_taken_0x1be74c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE74Cu;
        // 0x1be750: 0x8e02002c  lw          $v0, 0x2C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be74c) {
            ctx->pc = 0x1BE780u;
            goto label_1be780;
        }
    }
    ctx->pc = 0x1BE754u;
label_1be754:
    // 0x1be754: 0xc06efe2  jal         func_1BBF88
    ctx->pc = 0x1BE754u;
    SET_GPR_U32(ctx, 31, 0x1BE75Cu);
    ctx->pc = 0x1BE758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE754u;
    // 0x1be758: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BBF88u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1BBF88u, 0x1BE754u, 0x1BE75Cu)) {
        return;
    }
    ctx->pc = 0x1BE75Cu;
label_1be75c:
    // 0x1be75c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1BE75Cu;
    {
        const bool branch_taken_0x1be75c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE75Cu;
        // 0x1be760: 0x8e02002c  lw          $v0, 0x2C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be75c) {
            ctx->pc = 0x1BE780u;
            goto label_1be780;
        }
    }
    ctx->pc = 0x1BE764u;
label_1be764:
    // 0x1be764: 0xc06f02a  jal         func_1BC0A8
    ctx->pc = 0x1BE764u;
    SET_GPR_U32(ctx, 31, 0x1BE76Cu);
    ctx->pc = 0x1BE768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE764u;
    // 0x1be768: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BC0A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1BC0A8u, 0x1BE764u, 0x1BE76Cu)) {
        return;
    }
    ctx->pc = 0x1BE76Cu;
label_1be76c:
    // 0x1be76c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1BE76Cu;
    {
        const bool branch_taken_0x1be76c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE76Cu;
        // 0x1be770: 0x8e02002c  lw          $v0, 0x2C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be76c) {
            ctx->pc = 0x1BE780u;
            goto label_1be780;
        }
    }
    ctx->pc = 0x1BE774u;
label_1be774:
    // 0x1be774: 0xc06f078  jal         func_1BC1E0
    ctx->pc = 0x1BE774u;
    SET_GPR_U32(ctx, 31, 0x1BE77Cu);
    ctx->pc = 0x1BE778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE774u;
    // 0x1be778: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BC1E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1BC1E0u, 0x1BE774u, 0x1BE77Cu)) {
        return;
    }
    ctx->pc = 0x1BE77Cu;
label_1be77c:
    // 0x1be77c: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x1be77cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_1be780:
    // 0x1be780: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1be780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1be784: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1be784u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1be788: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1be788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1be78c: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x1be78cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x1be790: 0x50640001  beql        $v1, $a0, . + 4 + (0x1 << 2)
    ctx->pc = 0x1BE790u;
    {
        const bool branch_taken_0x1be790 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x1be790) {
            ctx->pc = 0x1BE794u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BE790u;
            // 0x1be794: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BE798u;
            goto label_1be798;
        }
    }
    ctx->pc = 0x1BE798u;
label_1be798:
    // 0x1be798: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1be798u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1be79c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1be79cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1be7a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1BE7A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BE7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE7A0u;
        // 0x1be7a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BE7A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BE7A8u;
}
