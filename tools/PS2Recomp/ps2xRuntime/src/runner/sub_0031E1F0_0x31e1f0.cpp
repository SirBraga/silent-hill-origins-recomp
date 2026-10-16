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

// Function: sub_0031E1F0
// Address: 0x31e1f0 - 0x31e2b0
void sub_0031E1F0_0x31e1f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031E1F0_0x31e1f0");
#endif

    switch (ctx->pc) {
        case 0x31e20cu: goto label_31e20c;
        case 0x31e298u: goto label_31e298;
        default: break;
    }

    ctx->pc = 0x31e1f0u;

    // 0x31e1f0: 0xa60018  mult        $zero, $a1, $a2
    ctx->pc = 0x31e1f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x31e1f4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x31e1f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x31e1f8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x31e1f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x31e1fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31e1fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31e200: 0x2812  mflo        $a1
    ctx->pc = 0x31e200u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x31e204: 0xc0c7436  jal         func_31D0D8
    ctx->pc = 0x31E204u;
    SET_GPR_U32(ctx, 31, 0x31E20Cu);
    ctx->pc = 0x31D0D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31D0D8u, 0x31E204u, 0x31E20Cu)) {
        return;
    }
    ctx->pc = 0x31E20Cu;
label_31e20c:
    // 0x31e20c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x31e20cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31e210: 0x56000003  bnel        $s0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x31E210u;
    {
        const bool branch_taken_0x31e210 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x31e210) {
            ctx->pc = 0x31E214u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31E210u;
            // 0x31e214: 0x8e03fffc  lw          $v1, -0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967292)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31E220u;
            goto label_31e220;
        }
    }
    ctx->pc = 0x31E218u;
    // 0x31e218: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x31E218u;
    {
        const bool branch_taken_0x31e218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E218u;
        // 0x31e21c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e218) {
            ctx->pc = 0x31E29Cu;
            goto label_31e29c;
        }
    }
    ctx->pc = 0x31E220u;
label_31e220:
    // 0x31e220: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x31e220u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x31e224: 0x3442fffc  ori         $v0, $v0, 0xFFFC
    ctx->pc = 0x31e224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
    // 0x31e228: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x31e228u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x31e22c: 0x2466fffc  addiu       $a2, $v1, -0x4
    ctx->pc = 0x31e22cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x31e230: 0x2cc20025  sltiu       $v0, $a2, 0x25
    ctx->pc = 0x31e230u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)37) ? 1 : 0);
    // 0x31e234: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x31E234u;
    {
        const bool branch_taken_0x31e234 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E234u;
        // 0x31e238: 0x2cc20014  sltiu       $v0, $a2, 0x14 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e234) {
            ctx->pc = 0x31E28Cu;
            goto label_31e28c;
        }
    }
    ctx->pc = 0x31E23Cu;
    // 0x31e23c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x31E23Cu;
    {
        const bool branch_taken_0x31e23c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31E240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E23Cu;
        // 0x31e240: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e23c) {
            ctx->pc = 0x31E278u;
            goto label_31e278;
        }
    }
    ctx->pc = 0x31E244u;
    // 0x31e244: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x31e244u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x31e248: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x31e248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x31e24c: 0x2cc2001c  sltiu       $v0, $a2, 0x1C
    ctx->pc = 0x31e24cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)28) ? 1 : 0);
    // 0x31e250: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x31E250u;
    {
        const bool branch_taken_0x31e250 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31E254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E250u;
        // 0x31e254: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e250) {
            ctx->pc = 0x31E278u;
            goto label_31e278;
        }
    }
    ctx->pc = 0x31E258u;
    // 0x31e258: 0x2cc20024  sltiu       $v0, $a2, 0x24
    ctx->pc = 0x31e258u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)36) ? 1 : 0);
    // 0x31e25c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x31e25cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x31e260: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x31e260u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x31e264: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x31E264u;
    {
        const bool branch_taken_0x31e264 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31E268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E264u;
        // 0x31e268: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e264) {
            ctx->pc = 0x31E278u;
            goto label_31e278;
        }
    }
    ctx->pc = 0x31E26Cu;
    // 0x31e26c: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x31e26cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x31e270: 0x26040018  addiu       $a0, $s0, 0x18
    ctx->pc = 0x31e270u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x31e274: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x31e274u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_31e278:
    // 0x31e278: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x31e278u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x31e27c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x31e27cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x31e280: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x31e280u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x31e284: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x31E284u;
    {
        const bool branch_taken_0x31e284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E284u;
        // 0x31e288: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e284) {
            ctx->pc = 0x31E298u;
            goto label_31e298;
        }
    }
    ctx->pc = 0x31E28Cu;
label_31e28c:
    // 0x31e28c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31e28cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31e290: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x31E290u;
    SET_GPR_U32(ctx, 31, 0x31E298u);
    ctx->pc = 0x31E294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E290u;
    // 0x31e294: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x31E290u, 0x31E298u)) {
        return;
    }
    ctx->pc = 0x31E298u;
label_31e298:
    // 0x31e298: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x31e298u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_31e29c:
    // 0x31e29c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x31e29cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31e2a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31e2a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31e2a4: 0x3e00008  jr          $ra
    ctx->pc = 0x31E2A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31E2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E2A4u;
        // 0x31e2a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31E2A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31E2ACu;
    // 0x31e2ac: 0x0  nop
    ctx->pc = 0x31e2acu;
    // NOP
    ctx->pc = 0x31e2b0u;
}
