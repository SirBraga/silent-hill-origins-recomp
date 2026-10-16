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

// Function: sub_002015C8
// Address: 0x2015c8 - 0x201658
void sub_002015C8_0x2015c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002015C8_0x2015c8");
#endif

    switch (ctx->pc) {
        case 0x201640u: goto label_201640;
        default: break;
    }

    ctx->pc = 0x2015c8u;

    // 0x2015c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2015c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2015cc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2015ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2015d0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2015d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2015d4: 0x24423a00  addiu       $v0, $v0, 0x3A00
    ctx->pc = 0x2015d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14848));
    // 0x2015d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2015d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2015dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2015dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2015e0: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x2015e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x2015e4: 0x26030028  addiu       $v1, $s0, 0x28
    ctx->pc = 0x2015e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x2015e8: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x2015e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    // 0x2015ec: 0x3c04005c  lui         $a0, 0x5C
    ctx->pc = 0x2015ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
    // 0x2015f0: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2015f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2015f4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2015f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x2015f8: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x2015f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x2015fc: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x2015fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x201600: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x201600u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x201604: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x201604u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x201608: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x201608u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x20160c: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x20160cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x201610: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x201610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x201614: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x201614u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x201618: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x201618u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x20161c: 0x8c820168  lw          $v0, 0x168($a0)
    ctx->pc = 0x20161cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5C0168u));
    // 0x201620: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x201620u;
    {
        const bool branch_taken_0x201620 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x201620) {
            ctx->pc = 0x201624u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x201620u;
            // 0x201624: 0xac900168  sw          $s0, 0x168($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 360), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x201638u;
            goto label_201638;
        }
    }
    ctx->pc = 0x201628u;
    // 0x201628: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x201628u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x20162c: 0x8c820168  lw          $v0, 0x168($a0)
    ctx->pc = 0x20162cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 360)));
    // 0x201630: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x201630u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x201634: 0xac900168  sw          $s0, 0x168($a0)
    ctx->pc = 0x201634u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 360), GPR_U32(ctx, 16));
label_201638:
    // 0x201638: 0xc0805dc  jal         func_201770
    ctx->pc = 0x201638u;
    SET_GPR_U32(ctx, 31, 0x201640u);
    ctx->pc = 0x20163Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201638u;
    // 0x20163c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201770u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x201770u, 0x201638u, 0x201640u)) {
        return;
    }
    ctx->pc = 0x201640u;
label_201640:
    // 0x201640: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x201640u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201644: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x201644u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x201648: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x201648u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20164c: 0x3e00008  jr          $ra
    ctx->pc = 0x20164Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20164Cu;
        // 0x201650: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20164Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x201654u;
    // 0x201654: 0x0  nop
    ctx->pc = 0x201654u;
    // NOP
    ctx->pc = 0x201658u;
}
