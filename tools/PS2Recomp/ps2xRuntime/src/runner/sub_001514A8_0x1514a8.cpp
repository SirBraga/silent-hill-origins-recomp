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

// Function: sub_001514A8
// Address: 0x1514a8 - 0x151548
void sub_001514A8_0x1514a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001514A8_0x1514a8");
#endif

    switch (ctx->pc) {
        case 0x1514ccu: goto label_1514cc;
        case 0x1514ecu: goto label_1514ec;
        default: break;
    }

    ctx->pc = 0x1514a8u;

    // 0x1514a8: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x1514a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x1514ac: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1514acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1514b0: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x1514b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1514b4: 0x8c628880  lw          $v0, -0x7780($v1)
    ctx->pc = 0x1514b4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6F8880u));
    // 0x1514b8: 0x14c20006  bne         $a2, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1514B8u;
    {
        const bool branch_taken_0x1514b8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x1514BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1514B8u;
        // 0x1514bc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1514b8) {
            ctx->pc = 0x1514D4u;
            goto label_1514d4;
        }
    }
    ctx->pc = 0x1514C0u;
    // 0x1514c0: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x1514c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1514c4: 0xc0543c8  jal         func_150F20
    ctx->pc = 0x1514C4u;
    SET_GPR_U32(ctx, 31, 0x1514CCu);
    ctx->pc = 0x1514C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1514C4u;
    // 0x1514c8: 0xc44c0008  lwc1        $f12, 0x8($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x150F20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x150F20u, 0x1514C4u, 0x1514CCu)) {
        return;
    }
    ctx->pc = 0x1514CCu;
label_1514cc:
    // 0x1514cc: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1514CCu;
    {
        const bool branch_taken_0x1514cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1514D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1514CCu;
        // 0x1514d0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1514cc) {
            ctx->pc = 0x15152Cu;
            goto label_15152c;
        }
    }
    ctx->pc = 0x1514D4u;
label_1514d4:
    // 0x1514d4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1514d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x1514d8: 0x8c43f888  lw          $v1, -0x778($v0)
    ctx->pc = 0x1514d8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6BF888u));
    // 0x1514dc: 0x14c30005  bne         $a2, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1514DCu;
    {
        const bool branch_taken_0x1514dc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x1514E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1514DCu;
        // 0x1514e0: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1514dc) {
            ctx->pc = 0x1514F4u;
            goto label_1514f4;
        }
    }
    ctx->pc = 0x1514E4u;
    // 0x1514e4: 0xc054552  jal         func_151548
    ctx->pc = 0x1514E4u;
    SET_GPR_U32(ctx, 31, 0x1514ECu);
    ctx->pc = 0x151548u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x151548u, 0x1514E4u, 0x1514ECu)) {
        return;
    }
    ctx->pc = 0x1514ECu;
label_1514ec:
    // 0x1514ec: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1514ECu;
    {
        const bool branch_taken_0x1514ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1514F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1514ECu;
        // 0x1514f0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1514ec) {
            ctx->pc = 0x15152Cu;
            goto label_15152c;
        }
    }
    ctx->pc = 0x1514F4u;
label_1514f4:
    // 0x1514f4: 0x8c43f8e8  lw          $v1, -0x718($v0)
    ctx->pc = 0x1514f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294965480)));
    // 0x1514f8: 0x14c3000c  bne         $a2, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1514F8u;
    {
        const bool branch_taken_0x1514f8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x1514FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1514F8u;
        // 0x1514fc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1514f8) {
            ctx->pc = 0x15152Cu;
            goto label_15152c;
        }
    }
    ctx->pc = 0x151500u;
    // 0x151500: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x151500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x151504: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x151504u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x151508: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x151508u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15150c: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x15150Cu;
    {
        const bool branch_taken_0x15150c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15150c) {
            ctx->pc = 0x151510u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15150Cu;
            // 0x151510: 0xe4802888  swc1        $f0, 0x2888($a0) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 10376), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x15152Cu;
            goto label_15152c;
        }
    }
    ctx->pc = 0x151514u;
    // 0x151514: 0x3c01461c  lui         $at, 0x461C
    ctx->pc = 0x151514u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17948 << 16));
    // 0x151518: 0x34214000  ori         $at, $at, 0x4000
    ctx->pc = 0x151518u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16384);
    // 0x15151c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x15151cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151520: 0x0  nop
    ctx->pc = 0x151520u;
    // NOP
    // 0x151524: 0xe4802888  swc1        $f0, 0x2888($a0)
    ctx->pc = 0x151524u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 10376), bits); }
    // 0x151528: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x151528u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_15152c:
    // 0x15152c: 0x3e00008  jr          $ra
    ctx->pc = 0x15152Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x151530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15152Cu;
        // 0x151530: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15152Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x151534u;
    // 0x151534: 0x0  nop
    ctx->pc = 0x151534u;
    // NOP
    // 0x151538: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x151538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x15153c: 0x0  nop
    ctx->pc = 0x15153cu;
    // NOP
    // 0x151540: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x151540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x151544: 0x0  nop
    ctx->pc = 0x151544u;
    // NOP
    ctx->pc = 0x151548u;
}
