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

// Function: sub_001688E0
// Address: 0x1688e0 - 0x168968
void sub_001688E0_0x1688e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001688E0_0x1688e0");
#endif

    switch (ctx->pc) {
        case 0x1688fcu: goto label_1688fc;
        case 0x168954u: goto label_168954;
        default: break;
    }

    ctx->pc = 0x1688e0u;

    // 0x1688e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1688e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1688e4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1688e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1688e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1688e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1688ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1688ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1688f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1688f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1688f4: 0xc04f0bc  jal         func_13C2F0
    ctx->pc = 0x1688F4u;
    SET_GPR_U32(ctx, 31, 0x1688FCu);
    ctx->pc = 0x1688F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1688F4u;
    // 0x1688f8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C2F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C2F0u, 0x1688F4u, 0x1688FCu)) {
        return;
    }
    ctx->pc = 0x1688FCu;
label_1688fc:
    // 0x1688fc: 0x8e030074  lw          $v1, 0x74($s0)
    ctx->pc = 0x1688fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x168900: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x168900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x168904: 0x54430005  bnel        $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x168904u;
    {
        const bool branch_taken_0x168904 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x168904) {
            ctx->pc = 0x168908u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x168904u;
            // 0x168908: 0x8e03007c  lw          $v1, 0x7C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16891Cu;
            goto label_16891c;
        }
    }
    ctx->pc = 0x16890Cu;
    // 0x16890c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16890cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x168910: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x168910u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
    // 0x168914: 0x8e03007c  lw          $v1, 0x7C($s0)
    ctx->pc = 0x168914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x168918: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x168918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_16891c:
    // 0x16891c: 0x50430001  beql        $v0, $v1, . + 4 + (0x1 << 2)
    ctx->pc = 0x16891Cu;
    {
        const bool branch_taken_0x16891c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x16891c) {
            ctx->pc = 0x168920u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16891Cu;
            // 0x168920: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x168924u;
            goto label_168924;
        }
    }
    ctx->pc = 0x168924u;
label_168924:
    // 0x168924: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x168924u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x168928: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x168928u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x16892c: 0x8c628880  lw          $v0, -0x7780($v1)
    ctx->pc = 0x16892cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6F8880u));
    // 0x168930: 0x10820004  beq         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x168930u;
    {
        const bool branch_taken_0x168930 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x168934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168930u;
        // 0x168934: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168930) {
            ctx->pc = 0x168944u;
            goto label_168944;
        }
    }
    ctx->pc = 0x168938u;
    // 0x168938: 0x8c438898  lw          $v1, -0x7768($v0)
    ctx->pc = 0x168938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936728)));
    // 0x16893c: 0x54830006  bnel        $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x16893Cu;
    {
        const bool branch_taken_0x16893c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x16893c) {
            ctx->pc = 0x168940u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16893Cu;
            // 0x168940: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x168958u;
            goto label_168958;
        }
    }
    ctx->pc = 0x168944u;
label_168944:
    // 0x168944: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x168944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x168948: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x168948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16894c: 0xc05a25a  jal         func_168968
    ctx->pc = 0x16894Cu;
    SET_GPR_U32(ctx, 31, 0x168954u);
    ctx->pc = 0x168950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16894Cu;
    // 0x168950: 0xc44c0008  lwc1        $f12, 0x8($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x168968u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x168968u, 0x16894Cu, 0x168954u)) {
        return;
    }
    ctx->pc = 0x168954u;
label_168954:
    // 0x168954: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x168954u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_168958:
    // 0x168958: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x168958u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16895c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16895cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x168960: 0x3e00008  jr          $ra
    ctx->pc = 0x168960u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x168964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168960u;
        // 0x168964: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x168960u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x168968u;
}
