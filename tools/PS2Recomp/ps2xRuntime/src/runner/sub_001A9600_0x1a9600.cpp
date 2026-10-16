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

// Function: sub_001A9600
// Address: 0x1a9600 - 0x1a96a0
void sub_001A9600_0x1a9600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A9600_0x1a9600");
#endif

    switch (ctx->pc) {
        case 0x1a965cu: goto label_1a965c;
        case 0x1a9680u: goto label_1a9680;
        default: break;
    }

    ctx->pc = 0x1a9600u;

    // 0x1a9600: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1a9600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1a9604: 0x30a20003  andi        $v0, $a1, 0x3
    ctx->pc = 0x1a9604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)3);
    // 0x1a9608: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1a9608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1a960c: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1a960cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x1a9610: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1a9610u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9614: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x1a9614u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x1a9618: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1a9618u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a961c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1a961cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1a9620: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x1a9620u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9624: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1a9624u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1a9628: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A9628u;
    {
        const bool branch_taken_0x1a9628 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A962Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9628u;
        // 0x1a962c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9628) {
            ctx->pc = 0x1A9640u;
            goto label_1a9640;
        }
    }
    ctx->pc = 0x1A9630u;
    // 0x1a9630: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1a9630u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1a9634: 0x3442fffc  ori         $v0, $v0, 0xFFFC
    ctx->pc = 0x1a9634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
    // 0x1a9638: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x1a9638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1a963c: 0x24450004  addiu       $a1, $v0, 0x4
    ctx->pc = 0x1a963cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_1a9640:
    // 0x1a9640: 0x58882  srl         $s1, $a1, 2
    ctx->pc = 0x1a9640u;
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 5), 2));
    // 0x1a9644: 0x2338018  mult        $s0, $s1, $s3
    ctx->pc = 0x1a9644u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x1a9648: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1a9648u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a964c: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x1a964cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x1a9650: 0x2842018  mult        $a0, $s4, $a0
    ctx->pc = 0x1a9650u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1a9654: 0xc080924  jal         func_202490
    ctx->pc = 0x1A9654u;
    SET_GPR_U32(ctx, 31, 0x1A965Cu);
    ctx->pc = 0x1A9658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9654u;
    // 0x1a9658: 0x42080  sll         $a0, $a0, 2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202490u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202490u, 0x1A9654u, 0x1A965Cu)) {
        return;
    }
    ctx->pc = 0x1A965Cu;
label_1a965c:
    // 0x1a965c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1a965cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1a9660: 0xae510004  sw          $s1, 0x4($s2)
    ctx->pc = 0x1a9660u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 17));
    // 0x1a9664: 0xae530008  sw          $s3, 0x8($s2)
    ctx->pc = 0x1a9664u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 19));
    // 0x1a9668: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a9668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a966c: 0xae54000c  sw          $s4, 0xC($s2)
    ctx->pc = 0x1a966cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 20));
    // 0x1a9670: 0xae400018  sw          $zero, 0x18($s2)
    ctx->pc = 0x1a9670u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 0));
    // 0x1a9674: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1a9674u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x1a9678: 0xc06a60e  jal         func_1A9838
    ctx->pc = 0x1A9678u;
    SET_GPR_U32(ctx, 31, 0x1A9680u);
    ctx->pc = 0x1A967Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9678u;
    // 0x1a967c: 0xae500014  sw          $s0, 0x14($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A9838u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A9838u, 0x1A9678u, 0x1A9680u)) {
        return;
    }
    ctx->pc = 0x1A9680u;
label_1a9680:
    // 0x1a9680: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1a9680u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a9684: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1a9684u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a9688: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1a9688u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a968c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1a968cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a9690: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x1a9690u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a9694: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a9694u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a9698: 0x3e00008  jr          $ra
    ctx->pc = 0x1A9698u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A969Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9698u;
        // 0x1a969c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A9698u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A96A0u;
}
