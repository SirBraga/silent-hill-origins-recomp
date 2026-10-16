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

// Function: sub_0019E1F0
// Address: 0x19e1f0 - 0x19e278
void sub_0019E1F0_0x19e1f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019E1F0_0x19e1f0");
#endif

    switch (ctx->pc) {
        case 0x19e218u: goto label_19e218;
        case 0x19e224u: goto label_19e224;
        case 0x19e238u: goto label_19e238;
        case 0x19e248u: goto label_19e248;
        case 0x19e250u: goto label_19e250;
        default: break;
    }

    ctx->pc = 0x19e1f0u;

    // 0x19e1f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x19e1f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x19e1f4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x19e1f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19e1f8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x19e1f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x19e1fc: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x19e1fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x19e200: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x19e200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x19e204: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x19e204u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e208: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x19e208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x19e20c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19e20cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19e210: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x19E210u;
    SET_GPR_U32(ctx, 31, 0x19E218u);
    ctx->pc = 0x19E214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E210u;
    // 0x19e214: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x19E210u, 0x19E218u)) {
        return;
    }
    ctx->pc = 0x19E218u;
label_19e218:
    // 0x19e218: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x19e218u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e21c: 0xc080572  jal         func_2015C8
    ctx->pc = 0x19E21Cu;
    SET_GPR_U32(ctx, 31, 0x19E224u);
    ctx->pc = 0x19E220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E21Cu;
    // 0x19e220: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2015C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2015C8u, 0x19E21Cu, 0x19E224u)) {
        return;
    }
    ctx->pc = 0x19E224u;
label_19e224:
    // 0x19e224: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x19e224u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x19e228: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19e228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e22c: 0x2463aa68  addiu       $v1, $v1, -0x5598
    ctx->pc = 0x19e22cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945384));
    // 0x19e230: 0xc088d96  jal         func_223658
    ctx->pc = 0x19E230u;
    SET_GPR_U32(ctx, 31, 0x19E238u);
    ctx->pc = 0x19E234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E230u;
    // 0x19e234: 0xae03003c  sw          $v1, 0x3C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223658u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x223658u, 0x19E230u, 0x19E238u)) {
        return;
    }
    ctx->pc = 0x19E238u;
label_19e238:
    // 0x19e238: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x19e238u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e23c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x19e23cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e240: 0xc067ccc  jal         func_19F330
    ctx->pc = 0x19E240u;
    SET_GPR_U32(ctx, 31, 0x19E248u);
    ctx->pc = 0x19E244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E240u;
    // 0x19e244: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x19F330u, 0x19E240u, 0x19E248u)) {
        return;
    }
    ctx->pc = 0x19E248u;
label_19e248:
    // 0x19e248: 0xc08ac14  jal         func_22B050
    ctx->pc = 0x19E248u;
    SET_GPR_U32(ctx, 31, 0x19E250u);
    ctx->pc = 0x19E24Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E248u;
    // 0x19e24c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22B050u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22B050u, 0x19E248u, 0x19E250u)) {
        return;
    }
    ctx->pc = 0x19E250u;
label_19e250:
    // 0x19e250: 0xae110018  sw          $s1, 0x18($s0)
    ctx->pc = 0x19e250u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 17));
    // 0x19e254: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x19e254u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e258: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x19e258u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19e25c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x19e25cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19e260: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x19e260u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19e264: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19e264u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19e268: 0x3e00008  jr          $ra
    ctx->pc = 0x19E268u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19E26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E268u;
        // 0x19e26c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19E268u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19E270u;
    // 0x19e270: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x19e270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x19e274: 0x0  nop
    ctx->pc = 0x19e274u;
    // NOP
    ctx->pc = 0x19e278u;
}
