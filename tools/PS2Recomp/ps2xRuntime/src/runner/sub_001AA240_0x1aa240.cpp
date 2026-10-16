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

// Function: sub_001AA240
// Address: 0x1aa240 - 0x1aa2b8
void sub_001AA240_0x1aa240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AA240_0x1aa240");
#endif

    switch (ctx->pc) {
        case 0x1aa264u: goto label_1aa264;
        default: break;
    }

    ctx->pc = 0x1aa240u;

    // 0x1aa240: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1aa240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1aa244: 0x248400d0  addiu       $a0, $a0, 0xD0
    ctx->pc = 0x1aa244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 208));
    // 0x1aa248: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1aa248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1aa24c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1aa24cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1aa250: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1aa250u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa254: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1aa254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1aa258: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1aa258u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa25c: 0xc06a5be  jal         func_1A96F8
    ctx->pc = 0x1AA25Cu;
    SET_GPR_U32(ctx, 31, 0x1AA264u);
    ctx->pc = 0x1AA260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA25Cu;
    // 0x1aa260: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A96F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A96F8u, 0x1AA25Cu, 0x1AA264u)) {
        return;
    }
    ctx->pc = 0x1AA264u;
label_1aa264:
    // 0x1aa264: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1aa264u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa268: 0x5060000d  beql        $v1, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x1AA268u;
    {
        const bool branch_taken_0x1aa268 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aa268) {
            ctx->pc = 0x1AA26Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AA268u;
            // 0x1aa26c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AA2A0u;
            goto label_1aa2a0;
        }
    }
    ctx->pc = 0x1AA270u;
    // 0x1aa270: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x1aa270u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x1aa274: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1aa274u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1aa278: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1aa278u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1aa27c: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x1aa27cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x1aa280: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x1aa280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aa284: 0xac710004  sw          $s1, 0x4($v1)
    ctx->pc = 0x1aa284u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 17));
    // 0x1aa288: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x1aa288u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x1aa28c: 0xac62001c  sw          $v0, 0x1C($v1)
    ctx->pc = 0x1aa28cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 2));
    // 0x1aa290: 0xac600014  sw          $zero, 0x14($v1)
    ctx->pc = 0x1aa290u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
    // 0x1aa294: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x1aa294u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x1aa298: 0xac600018  sw          $zero, 0x18($v1)
    ctx->pc = 0x1aa298u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 0));
    // 0x1aa29c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1aa29cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1aa2a0:
    // 0x1aa2a0: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1aa2a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa2a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1aa2a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aa2a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1aa2a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aa2ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1AA2ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AA2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA2ACu;
        // 0x1aa2b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AA2ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AA2B4u;
    // 0x1aa2b4: 0x0  nop
    ctx->pc = 0x1aa2b4u;
    // NOP
    ctx->pc = 0x1aa2b8u;
}
