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

// Function: sub_001A71F8
// Address: 0x1a71f8 - 0x1a7288
void sub_001A71F8_0x1a71f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A71F8_0x1a71f8");
#endif

    switch (ctx->pc) {
        case 0x1a7214u: goto label_1a7214;
        default: break;
    }

    ctx->pc = 0x1a71f8u;

    // 0x1a71f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a71f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a71fc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1a71fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1a7200: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a7200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a7204: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1a7204u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7208: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a7208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a720c: 0xc06a780  jal         func_1A9E00
    ctx->pc = 0x1A720Cu;
    SET_GPR_U32(ctx, 31, 0x1A7214u);
    ctx->pc = 0x1A7210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A720Cu;
    // 0x1a7210: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A9E00u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A9E00u, 0x1A720Cu, 0x1A7214u)) {
        return;
    }
    ctx->pc = 0x1A7214u;
label_1a7214:
    // 0x1a7214: 0x96030020  lhu         $v1, 0x20($s0)
    ctx->pc = 0x1a7214u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1a7218: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1a7218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1a721c: 0x10620015  beq         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1A721Cu;
    {
        const bool branch_taken_0x1a721c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A7220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A721Cu;
        // 0x1a7220: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a721c) {
            ctx->pc = 0x1A7274u;
            goto label_1a7274;
        }
    }
    ctx->pc = 0x1A7224u;
    // 0x1a7224: 0x244281b0  addiu       $v0, $v0, -0x7E50
    ctx->pc = 0x1a7224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934960));
    // 0x1a7228: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x1a7228u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1a722c: 0x50a00009  beql        $a1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A722Cu;
    {
        const bool branch_taken_0x1a722c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a722c) {
            ctx->pc = 0x1A7230u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A722Cu;
            // 0x1a7230: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A7254u;
            goto label_1a7254;
        }
    }
    ctx->pc = 0x1A7234u;
    // 0x1a7234: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1a7234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1a7238: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x1a7238u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1a723c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A723Cu;
    {
        const bool branch_taken_0x1a723c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A7240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A723Cu;
        // 0x1a7240: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a723c) {
            ctx->pc = 0x1A724Cu;
            goto label_1a724c;
        }
    }
    ctx->pc = 0x1A7244u;
    // 0x1a7244: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A7244u;
    {
        const bool branch_taken_0x1a7244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7244u;
        // 0x1a7248: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7244) {
            ctx->pc = 0x1A7254u;
            goto label_1a7254;
        }
    }
    ctx->pc = 0x1A724Cu;
label_1a724c:
    // 0x1a724c: 0x622018  mult        $a0, $v1, $v0
    ctx->pc = 0x1a724cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1a7250: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x1a7250u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1a7254:
    // 0x1a7254: 0x94a2002e  lhu         $v0, 0x2E($a1)
    ctx->pc = 0x1a7254u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 46)));
    // 0x1a7258: 0x9624001c  lhu         $a0, 0x1C($s1)
    ctx->pc = 0x1a7258u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1a725c: 0x30437fff  andi        $v1, $v0, 0x7FFF
    ctx->pc = 0x1a725cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x1a7260: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a7260u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a7264: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x1a7264u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x1a7268: 0x30637fff  andi        $v1, $v1, 0x7FFF
    ctx->pc = 0x1a7268u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32767);
    // 0x1a726c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1a726cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1a7270: 0xa4a3002e  sh          $v1, 0x2E($a1)
    ctx->pc = 0x1a7270u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 46), (uint16_t)GPR_U32(ctx, 3));
label_1a7274:
    // 0x1a7274: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1a7274u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a7278: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a7278u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a727c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a727cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a7280: 0x3e00008  jr          $ra
    ctx->pc = 0x1A7280u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A7284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7280u;
        // 0x1a7284: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A7280u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A7288u;
}
