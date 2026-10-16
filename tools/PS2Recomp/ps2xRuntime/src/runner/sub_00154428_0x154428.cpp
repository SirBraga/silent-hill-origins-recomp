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

// Function: sub_00154428
// Address: 0x154428 - 0x1544d0
void sub_00154428_0x154428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00154428_0x154428");
#endif

    switch (ctx->pc) {
        case 0x1544a0u: goto label_1544a0;
        case 0x1544bcu: goto label_1544bc;
        default: break;
    }

    ctx->pc = 0x154428u;

    // 0x154428: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x154428u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x15442c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x15442cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x154430: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x154430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x154434: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x154434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x154438: 0x8c62f050  lw          $v0, -0xFB0($v1)
    ctx->pc = 0x154438u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6BF050u));
    // 0x15443c: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x15443cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x154440: 0x14c20003  bne         $a2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x154440u;
    {
        const bool branch_taken_0x154440 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x154444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154440u;
        // 0x154444: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154440) {
            ctx->pc = 0x154450u;
            goto label_154450;
        }
    }
    ctx->pc = 0x154448u;
    // 0x154448: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x154448u;
    {
        const bool branch_taken_0x154448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15444Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154448u;
        // 0x15444c: 0xae000048  sw          $zero, 0x48($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154448) {
            ctx->pc = 0x1544BCu;
            goto label_1544bc;
        }
    }
    ctx->pc = 0x154450u;
label_154450:
    // 0x154450: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x154450u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x154454: 0x8c43f020  lw          $v1, -0xFE0($v0)
    ctx->pc = 0x154454u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6BF020u));
    // 0x154458: 0x14c30004  bne         $a2, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x154458u;
    {
        const bool branch_taken_0x154458 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x15445Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154458u;
        // 0x15445c: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154458) {
            ctx->pc = 0x15446Cu;
            goto label_15446c;
        }
    }
    ctx->pc = 0x154460u;
    // 0x154460: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x154460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x154464: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x154464u;
    {
        const bool branch_taken_0x154464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154464u;
        // 0x154468: 0xae020048  sw          $v0, 0x48($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154464) {
            ctx->pc = 0x1544BCu;
            goto label_1544bc;
        }
    }
    ctx->pc = 0x15446Cu;
label_15446c:
    // 0x15446c: 0x8c448880  lw          $a0, -0x7780($v0)
    ctx->pc = 0x15446cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936704)));
    // 0x154470: 0x10c40004  beq         $a2, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x154470u;
    {
        const bool branch_taken_0x154470 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        ctx->pc = 0x154474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154470u;
        // 0x154474: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154470) {
            ctx->pc = 0x154484u;
            goto label_154484;
        }
    }
    ctx->pc = 0x154478u;
    // 0x154478: 0x8c438918  lw          $v1, -0x76E8($v0)
    ctx->pc = 0x154478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936856)));
    // 0x15447c: 0x54c30010  bnel        $a2, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x15447Cu;
    {
        const bool branch_taken_0x15447c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x15447c) {
            ctx->pc = 0x154480u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15447Cu;
            // 0x154480: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1544C0u;
            goto label_1544c0;
        }
    }
    ctx->pc = 0x154484u;
label_154484:
    // 0x154484: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x154484u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x154488: 0x50a0000d  beql        $a1, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x154488u;
    {
        const bool branch_taken_0x154488 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x154488) {
            ctx->pc = 0x15448Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x154488u;
            // 0x15448c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1544C0u;
            goto label_1544c0;
        }
    }
    ctx->pc = 0x154490u;
    // 0x154490: 0x54c40005  bnel        $a2, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x154490u;
    {
        const bool branch_taken_0x154490 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 4));
        if (branch_taken_0x154490) {
            ctx->pc = 0x154494u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x154490u;
            // 0x154494: 0x8e020048  lw          $v0, 0x48($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1544A8u;
            goto label_1544a8;
        }
    }
    ctx->pc = 0x154498u;
    // 0x154498: 0xc05f90a  jal         func_17E428
    ctx->pc = 0x154498u;
    SET_GPR_U32(ctx, 31, 0x1544A0u);
    ctx->pc = 0x15449Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154498u;
    // 0x15449c: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E428u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17E428u, 0x154498u, 0x1544A0u)) {
        return;
    }
    ctx->pc = 0x1544A0u;
label_1544a0:
    // 0x1544a0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1544A0u;
    {
        const bool branch_taken_0x1544a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1544A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1544A0u;
        // 0x1544a4: 0xe6000044  swc1        $f0, 0x44($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1544a0) {
            ctx->pc = 0x1544BCu;
            goto label_1544bc;
        }
    }
    ctx->pc = 0x1544A8u;
label_1544a8:
    // 0x1544a8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1544A8u;
    {
        const bool branch_taken_0x1544a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1544a8) {
            ctx->pc = 0x1544ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1544A8u;
            // 0x1544ac: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1544C0u;
            goto label_1544c0;
        }
    }
    ctx->pc = 0x1544B0u;
    // 0x1544b0: 0x8ca5000c  lw          $a1, 0xC($a1)
    ctx->pc = 0x1544b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1544b4: 0xc054fec  jal         func_153FB0
    ctx->pc = 0x1544B4u;
    SET_GPR_U32(ctx, 31, 0x1544BCu);
    ctx->pc = 0x1544B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1544B4u;
    // 0x1544b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153FB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x153FB0u, 0x1544B4u, 0x1544BCu)) {
        return;
    }
    ctx->pc = 0x1544BCu;
label_1544bc:
    // 0x1544bc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1544bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1544c0:
    // 0x1544c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1544c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1544c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1544C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1544C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1544C4u;
        // 0x1544c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1544C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1544CCu;
    // 0x1544cc: 0x0  nop
    ctx->pc = 0x1544ccu;
    // NOP
    ctx->pc = 0x1544d0u;
}
