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

// Function: sub_0017D1F0
// Address: 0x17d1f0 - 0x17d298
void sub_0017D1F0_0x17d1f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017D1F0_0x17d1f0");
#endif

    switch (ctx->pc) {
        case 0x17d254u: goto label_17d254;
        case 0x17d268u: goto label_17d268;
        case 0x17d274u: goto label_17d274;
        case 0x17d280u: goto label_17d280;
        default: break;
    }

    ctx->pc = 0x17d1f0u;

    // 0x17d1f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17d1f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17d1f4: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x17d1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x17d1f8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x17d1f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x17d1fc: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x17d1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x17d200: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x17d200u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x17d204: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17d204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17d208: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17d208u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d20c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17d20cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17d210: 0x244273b8  addiu       $v0, $v0, 0x73B8
    ctx->pc = 0x17d210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29624));
    // 0x17d214: 0x24637378  addiu       $v1, $v1, 0x7378
    ctx->pc = 0x17d214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29560));
    // 0x17d218: 0x24c673d8  addiu       $a2, $a2, 0x73D8
    ctx->pc = 0x17d218u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 29656));
    // 0x17d21c: 0xae03007c  sw          $v1, 0x7C($s0)
    ctx->pc = 0x17d21cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 3));
    // 0x17d220: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x17d220u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    // 0x17d224: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x17d224u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x17d228: 0xae060034  sw          $a2, 0x34($s0)
    ctx->pc = 0x17d228u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 6));
    // 0x17d22c: 0x8e030080  lw          $v1, 0x80($s0)
    ctx->pc = 0x17d22cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x17d230: 0x8c828854  lw          $v0, -0x77AC($a0)
    ctx->pc = 0x17d230u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x338854u));
    // 0x17d234: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x17D234u;
    {
        const bool branch_taken_0x17d234 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x17D238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D234u;
        // 0x17d238: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17d234) {
            ctx->pc = 0x17D240u;
            goto label_17d240;
        }
    }
    ctx->pc = 0x17D23Cu;
    // 0x17d23c: 0xac808854  sw          $zero, -0x77AC($a0)
    ctx->pc = 0x17d23cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294936660), GPR_U32(ctx, 0));
label_17d240:
    // 0x17d240: 0x8e040080  lw          $a0, 0x80($s0)
    ctx->pc = 0x17d240u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x17d244: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x17D244u;
    {
        const bool branch_taken_0x17d244 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x17d244) {
            ctx->pc = 0x17D248u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17D244u;
            // 0x17d248: 0x3c050070  lui         $a1, 0x70 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17D25Cu;
            goto label_17d25c;
        }
    }
    ctx->pc = 0x17D24Cu;
    // 0x17d24c: 0xc0955f8  jal         func_2557E0
    ctx->pc = 0x17D24Cu;
    SET_GPR_U32(ctx, 31, 0x17D254u);
    ctx->pc = 0x2557E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2557E0u, 0x17D24Cu, 0x17D254u)) {
        return;
    }
    ctx->pc = 0x17D254u;
label_17d254:
    // 0x17d254: 0xae000080  sw          $zero, 0x80($s0)
    ctx->pc = 0x17d254u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 0));
    // 0x17d258: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x17d258u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
label_17d25c:
    // 0x17d25c: 0x26040038  addiu       $a0, $s0, 0x38
    ctx->pc = 0x17d25cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    // 0x17d260: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x17D260u;
    SET_GPR_U32(ctx, 31, 0x17D268u);
    ctx->pc = 0x17D264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D260u;
    // 0x17d264: 0x24a58880  addiu       $a1, $a1, -0x7780 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x17D260u, 0x17D268u)) {
        return;
    }
    ctx->pc = 0x17D268u;
label_17d268:
    // 0x17d268: 0x26040044  addiu       $a0, $s0, 0x44
    ctx->pc = 0x17d268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
    // 0x17d26c: 0xc041eae  jal         func_107AB8
    ctx->pc = 0x17D26Cu;
    SET_GPR_U32(ctx, 31, 0x17D274u);
    ctx->pc = 0x17D270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D26Cu;
    // 0x17d270: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107AB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x107AB8u, 0x17D26Cu, 0x17D274u)) {
        return;
    }
    ctx->pc = 0x17D274u;
label_17d274:
    // 0x17d274: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17d274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d278: 0xc04f084  jal         func_13C210
    ctx->pc = 0x17D278u;
    SET_GPR_U32(ctx, 31, 0x17D280u);
    ctx->pc = 0x17D27Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D278u;
    // 0x17d27c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C210u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C210u, 0x17D278u, 0x17D280u)) {
        return;
    }
    ctx->pc = 0x17D280u;
label_17d280:
    // 0x17d280: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x17d280u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17d284: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17d284u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17d288: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17d288u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17d28c: 0x3e00008  jr          $ra
    ctx->pc = 0x17D28Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D28Cu;
        // 0x17d290: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17D28Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17D294u;
    // 0x17d294: 0x0  nop
    ctx->pc = 0x17d294u;
    // NOP
    ctx->pc = 0x17d298u;
}
