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

// Function: sub_001F53D0
// Address: 0x1f53d0 - 0x1f54a0
void sub_001F53D0_0x1f53d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F53D0_0x1f53d0");
#endif

    switch (ctx->pc) {
        case 0x1f5430u: goto label_1f5430;
        case 0x1f543cu: goto label_1f543c;
        case 0x1f5470u: goto label_1f5470;
        default: break;
    }

    ctx->pc = 0x1f53d0u;

    // 0x1f53d0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1f53d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1f53d4: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x1f53d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x1f53d8: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x1f53d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x1f53dc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1f53dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f53e0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1f53e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1f53e4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1f53e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f53e8: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x1f53e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x1f53ec: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1f53ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f53f0: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x1f53f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x1f53f4: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1f53f4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f53f8: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x1f53f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x1f53fc: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x1f53fcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5400: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x1f5400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x1f5404: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x1f5404u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5408: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f5408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f540c: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x1f540cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1f5410: 0x531026  xor         $v0, $v0, $s3
    ctx->pc = 0x1f5410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 19));
    // 0x1f5414: 0x242880a  movz        $s1, $s2, $v0
    ctx->pc = 0x1f5414u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 17, GPR_U64(ctx, 18));
    // 0x1f5418: 0x1620000e  bnez        $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x1F5418u;
    {
        const bool branch_taken_0x1f5418 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F541Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5418u;
        // 0x1f541c: 0x8e500004  lw          $s0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5418) {
            ctx->pc = 0x1F5454u;
            goto label_1f5454;
        }
    }
    ctx->pc = 0x1F5420u;
    // 0x1f5420: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x1F5420u;
    {
        const bool branch_taken_0x1f5420 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f5420) {
            ctx->pc = 0x1F5454u;
            goto label_1f5454;
        }
    }
    ctx->pc = 0x1F5428u;
    // 0x1f5428: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1f5428u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f542c: 0x0  nop
    ctx->pc = 0x1f542cu;
    // NOP
label_1f5430:
    // 0x1f5430: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1f5430u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5434: 0xc07d3b8  jal         func_1F4EE0
    ctx->pc = 0x1F5434u;
    SET_GPR_U32(ctx, 31, 0x1F543Cu);
    ctx->pc = 0x1F5438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5434u;
    // 0x1f5438: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4EE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4EE0u, 0x1F5434u, 0x1F543Cu)) {
        return;
    }
    ctx->pc = 0x1F543Cu;
label_1f543c:
    // 0x1f543c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1f543cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1f5440: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1f5440u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5444: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F5444u;
    {
        const bool branch_taken_0x1f5444 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F5448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5444u;
        // 0x1f5448: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5444) {
            ctx->pc = 0x1F5454u;
            goto label_1f5454;
        }
    }
    ctx->pc = 0x1F544Cu;
    // 0x1f544c: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1F544Cu;
    {
        const bool branch_taken_0x1f544c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f544c) {
            ctx->pc = 0x1F5450u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F544Cu;
            // 0x1f5450: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F5430u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f5430;
        }
    }
    ctx->pc = 0x1F5454u;
label_1f5454:
    // 0x1f5454: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F5454u;
    {
        const bool branch_taken_0x1f5454 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5454u;
        // 0x1f5458: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5454) {
            ctx->pc = 0x1F5470u;
            goto label_1f5470;
        }
    }
    ctx->pc = 0x1F545Cu;
    // 0x1f545c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1f545cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5460: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x1f5460u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5464: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x1f5464u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5468: 0xc07d528  jal         func_1F54A0
    ctx->pc = 0x1F5468u;
    SET_GPR_U32(ctx, 31, 0x1F5470u);
    ctx->pc = 0x1F546Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5468u;
    // 0x1f546c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F54A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F54A0u, 0x1F5468u, 0x1F5470u)) {
        return;
    }
    ctx->pc = 0x1F5470u;
label_1f5470:
    // 0x1f5470: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1f5470u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5474: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x1f5474u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1f5478: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x1f5478u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1f547c: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x1f547cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f5480: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1f5480u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f5484: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x1f5484u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f5488: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x1f5488u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f548c: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x1f548cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f5490: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f5490u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f5494: 0x3e00008  jr          $ra
    ctx->pc = 0x1F5494u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F5498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5494u;
        // 0x1f5498: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F5494u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F549Cu;
    // 0x1f549c: 0x0  nop
    ctx->pc = 0x1f549cu;
    // NOP
    ctx->pc = 0x1f54a0u;
}
