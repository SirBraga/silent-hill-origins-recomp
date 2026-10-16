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

// Function: sub_00175498
// Address: 0x175498 - 0x175530
void sub_00175498_0x175498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00175498_0x175498");
#endif

    switch (ctx->pc) {
        case 0x1754d8u: goto label_1754d8;
        case 0x1754ecu: goto label_1754ec;
        case 0x175508u: goto label_175508;
        case 0x175514u: goto label_175514;
        default: break;
    }

    ctx->pc = 0x175498u;

    // 0x175498: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x175498u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x17549c: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x17549cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x1754a0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1754a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1754a4: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x1754a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x1754a8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1754a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1754ac: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1754acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1754b0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1754b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1754b4: 0x24426058  addiu       $v0, $v0, 0x6058
    ctx->pc = 0x1754b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24664));
    // 0x1754b8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1754b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1754bc: 0x24636078  addiu       $v1, $v1, 0x6078
    ctx->pc = 0x1754bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24696));
    // 0x1754c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1754c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1754c4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1754c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1754c8: 0xae42003c  sw          $v0, 0x3C($s2)
    ctx->pc = 0x1754c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 2));
    // 0x1754cc: 0x2650005c  addiu       $s0, $s2, 0x5C
    ctx->pc = 0x1754ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 92));
    // 0x1754d0: 0xae430034  sw          $v1, 0x34($s2)
    ctx->pc = 0x1754d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 3));
    // 0x1754d4: 0x24110008  addiu       $s1, $zero, 0x8
    ctx->pc = 0x1754d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1754d8:
    // 0x1754d8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1754d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1754dc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1754DCu;
    {
        const bool branch_taken_0x1754dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1754E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1754DCu;
        // 0x1754e0: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1754dc) {
            ctx->pc = 0x1754F0u;
            goto label_1754f0;
        }
    }
    ctx->pc = 0x1754E4u;
    // 0x1754e4: 0xc0808d4  jal         func_202350
    ctx->pc = 0x1754E4u;
    SET_GPR_U32(ctx, 31, 0x1754ECu);
    ctx->pc = 0x202350u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202350u, 0x1754E4u, 0x1754ECu)) {
        return;
    }
    ctx->pc = 0x1754ECu;
label_1754ec:
    // 0x1754ec: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1754ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_1754f0:
    // 0x1754f0: 0x621fff9  bgez        $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1754F0u;
    {
        const bool branch_taken_0x1754f0 = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x1754F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1754F0u;
        // 0x1754f4: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1754f0) {
            ctx->pc = 0x1754D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1754d8;
        }
    }
    ctx->pc = 0x1754F8u;
    // 0x1754f8: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1754f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1754fc: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x1754fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x175500: 0xc06ca38  jal         func_1B28E0
    ctx->pc = 0x175500u;
    SET_GPR_U32(ctx, 31, 0x175508u);
    ctx->pc = 0x175504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175500u;
    // 0x175504: 0x8c449168  lw          $a0, -0x6E98($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294938984)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B28E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B28E0u, 0x175500u, 0x175508u)) {
        return;
    }
    ctx->pc = 0x175508u;
label_175508:
    // 0x175508: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x175508u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17550c: 0xc05d822  jal         func_176088
    ctx->pc = 0x17550Cu;
    SET_GPR_U32(ctx, 31, 0x175514u);
    ctx->pc = 0x175510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17550Cu;
    // 0x175510: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x176088u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x176088u, 0x17550Cu, 0x175514u)) {
        return;
    }
    ctx->pc = 0x175514u;
label_175514:
    // 0x175514: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x175514u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x175518: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x175518u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17551c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17551cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x175520: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x175520u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x175524: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x175524u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x175528: 0x3e00008  jr          $ra
    ctx->pc = 0x175528u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17552Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175528u;
        // 0x17552c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x175528u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x175530u;
}
