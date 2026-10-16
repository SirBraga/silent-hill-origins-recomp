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

// Function: sub_00302968
// Address: 0x302968 - 0x3029b8
void sub_00302968_0x302968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00302968_0x302968");
#endif

    switch (ctx->pc) {
        case 0x30297cu: goto label_30297c;
        default: break;
    }

    ctx->pc = 0x302968u;

    // 0x302968: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x302968u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x30296c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x30296cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x302970: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x302970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x302974: 0xc0c09f2  jal         func_3027C8
    ctx->pc = 0x302974u;
    SET_GPR_U32(ctx, 31, 0x30297Cu);
    ctx->pc = 0x302978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302974u;
    // 0x302978: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3027C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3027C8u, 0x302974u, 0x30297Cu)) {
        return;
    }
    ctx->pc = 0x30297Cu;
label_30297c:
    // 0x30297c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x30297cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x302980: 0x34422020  ori         $v0, $v0, 0x2020
    ctx->pc = 0x302980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8224);
    // 0x302984: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x302984u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x10002020u)); // MMIO: 0x10002020
    // 0x302988: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x302988u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x30298c: 0x31823  negu        $v1, $v1
    ctx->pc = 0x30298cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x302990: 0x30650007  andi        $a1, $v1, 0x7
    ctx->pc = 0x302990u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x302994: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x302994u;
    {
        const bool branch_taken_0x302994 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x302998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302994u;
        // 0x302998: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302994) {
            ctx->pc = 0x3029ACu;
            goto label_3029ac;
        }
    }
    ctx->pc = 0x30299Cu;
    // 0x30299c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30299cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3029a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3029a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3029a4: 0x80c0a00  j           func_302800
    ctx->pc = 0x3029A4u;
    ctx->pc = 0x3029A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3029A4u;
    // 0x3029a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302800u;
    sub_00302800_0x302800(rdram, ctx, runtime); return;
    ctx->pc = 0x3029ACu;
label_3029ac:
    // 0x3029ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3029acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3029b0: 0x3e00008  jr          $ra
    ctx->pc = 0x3029B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3029B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3029B0u;
        // 0x3029b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3029B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3029B8u;
}
