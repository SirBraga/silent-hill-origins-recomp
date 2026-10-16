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

// Function: sub_003172D8
// Address: 0x3172d8 - 0x317358
void sub_003172D8_0x3172d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003172D8_0x3172d8");
#endif

    switch (ctx->pc) {
        case 0x317308u: goto label_317308;
        case 0x317324u: goto label_317324;
        default: break;
    }

    ctx->pc = 0x3172d8u;

    // 0x3172d8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3172d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3172dc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3172dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x3172e0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3172e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3172e4: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3172e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x3172e8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3172e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3172ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3172ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3172f0: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x3172f0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3172f4: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3172F4u;
    {
        const bool branch_taken_0x3172f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3172F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3172F4u;
        // 0x3172f8: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3172f4) {
            ctx->pc = 0x317338u;
            goto label_317338;
        }
    }
    ctx->pc = 0x3172FCu;
    // 0x3172fc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3172fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x317300: 0x245211d1  addiu       $s2, $v0, 0x11D1
    ctx->pc = 0x317300u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4561));
    // 0x317304: 0x82040000  lb          $a0, 0x0($s0)
    ctx->pc = 0x317304u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_317308:
    // 0x317308: 0x921821  addu        $v1, $a0, $s2
    ctx->pc = 0x317308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x31730c: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x31730cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x317310: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x317310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x317314: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x317314u;
    {
        const bool branch_taken_0x317314 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x317314) {
            ctx->pc = 0x317318u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x317314u;
            // 0x317318: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31732Cu;
            goto label_31732c;
        }
    }
    ctx->pc = 0x31731Cu;
    // 0x31731c: 0xc0c79ba  jal         func_31E6E8
    ctx->pc = 0x31731Cu;
    SET_GPR_U32(ctx, 31, 0x317324u);
    ctx->pc = 0x31E6E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31E6E8u, 0x31731Cu, 0x317324u)) {
        return;
    }
    ctx->pc = 0x317324u;
label_317324:
    // 0x317324: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x317324u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x317328: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x317328u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_31732c:
    // 0x31732c: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x31732cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x317330: 0x5440fff5  bnel        $v0, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x317330u;
    {
        const bool branch_taken_0x317330 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x317330) {
            ctx->pc = 0x317334u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x317330u;
            // 0x317334: 0x82040000  lb          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x317308u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_317308;
        }
    }
    ctx->pc = 0x317338u;
label_317338:
    // 0x317338: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x317338u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31733c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x31733cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x317340: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x317340u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x317344: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x317344u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x317348: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x317348u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31734c: 0x3e00008  jr          $ra
    ctx->pc = 0x31734Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x317350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31734Cu;
        // 0x317350: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31734Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x317354u;
    // 0x317354: 0x0  nop
    ctx->pc = 0x317354u;
    // NOP
    ctx->pc = 0x317358u;
}
