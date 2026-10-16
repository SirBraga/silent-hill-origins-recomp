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

// Function: sub_00324908
// Address: 0x324908 - 0x3249d8
void sub_00324908_0x324908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00324908_0x324908");
#endif

    switch (ctx->pc) {
        case 0x32492cu: goto label_32492c;
        case 0x324958u: goto label_324958;
        case 0x324994u: goto label_324994;
        default: break;
    }

    ctx->pc = 0x324908u;

    // 0x324908: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x324908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x32490c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x32490cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x324910: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x324910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x324914: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x324914u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324918: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x324918u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32491c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x32491cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x324920: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x324920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x324924: 0xc0c9188  jal         func_324620
    ctx->pc = 0x324924u;
    SET_GPR_U32(ctx, 31, 0x32492Cu);
    ctx->pc = 0x324928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324924u;
    // 0x324928: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324620u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x324620u, 0x324924u, 0x32492Cu)) {
        return;
    }
    ctx->pc = 0x32492Cu;
label_32492c:
    // 0x32492c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x32492cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324930: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x324930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x324934: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x324934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x324938: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x324938u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x32493c: 0x34420009  ori         $v0, $v0, 0x9
    ctx->pc = 0x32493cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9);
    // 0x324940: 0xae44001c  sw          $a0, 0x1C($s2)
    ctx->pc = 0x324940u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 4));
    // 0x324944: 0xae430014  sw          $v1, 0x14($s2)
    ctx->pc = 0x324944u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 3));
    // 0x324948: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x324948u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32494c: 0xae420020  sw          $v0, 0x20($s2)
    ctx->pc = 0x32494cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
    // 0x324950: 0xc0c921e  jal         func_324878
    ctx->pc = 0x324950u;
    SET_GPR_U32(ctx, 31, 0x324958u);
    ctx->pc = 0x324954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324950u;
    // 0x324954: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324878u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x324878u, 0x324950u, 0x324958u)) {
        return;
    }
    ctx->pc = 0x324958u;
label_324958:
    // 0x324958: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x324958u;
    {
        const bool branch_taken_0x324958 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x324958) {
            ctx->pc = 0x32495Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x324958u;
            // 0x32495c: 0xae420024  sw          $v0, 0x24($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32496Cu;
            goto label_32496c;
        }
    }
    ctx->pc = 0x324960u;
    // 0x324960: 0xae400024  sw          $zero, 0x24($s2)
    ctx->pc = 0x324960u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 0));
    // 0x324964: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x324964u;
    {
        const bool branch_taken_0x324964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x324968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324964u;
        // 0x324968: 0xae400028  sw          $zero, 0x28($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324964) {
            ctx->pc = 0x324974u;
            goto label_324974;
        }
    }
    ctx->pc = 0x32496Cu;
label_32496c:
    // 0x32496c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x32496cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x324970: 0xae420028  sw          $v0, 0x28($s2)
    ctx->pc = 0x324970u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 2));
label_324974:
    // 0x324974: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x324974u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x324978: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x324978u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32497c: 0x34840008  ori         $a0, $a0, 0x8
    ctx->pc = 0x32497cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8);
    // 0x324980: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x324980u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x324984: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x324984u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324988: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x324988u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32498c: 0xc0c9056  jal         func_324158
    ctx->pc = 0x32498Cu;
    SET_GPR_U32(ctx, 31, 0x324994u);
    ctx->pc = 0x324990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32498Cu;
    // 0x324990: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324158u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x324158u, 0x32498Cu, 0x324994u)) {
        return;
    }
    ctx->pc = 0x324994u;
label_324994:
    // 0x324994: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x324994u;
    {
        const bool branch_taken_0x324994 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x324998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324994u;
        // 0x324998: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324994) {
            ctx->pc = 0x3249C0u;
            goto label_3249c0;
        }
    }
    ctx->pc = 0x32499Cu;
    // 0x32499c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x32499cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3249a0: 0x3c050032  lui         $a1, 0x32
    ctx->pc = 0x3249a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)50 << 16));
    // 0x3249a4: 0x24a548c8  addiu       $a1, $a1, 0x48C8
    ctx->pc = 0x3249a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18632));
    // 0x3249a8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3249a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3249ac: 0x24040800  addiu       $a0, $zero, 0x800
    ctx->pc = 0x3249acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x3249b0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3249b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3249b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3249b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3249b8: 0x80ca0ac  j           func_3282B0
    ctx->pc = 0x3249B8u;
    ctx->pc = 0x3249BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3249B8u;
    // 0x3249bc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3282B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3282B0u, 0x3249B8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3249C0u;
label_3249c0:
    // 0x3249c0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3249c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3249c4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3249c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3249c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3249c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3249cc: 0x3e00008  jr          $ra
    ctx->pc = 0x3249CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3249D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3249CCu;
        // 0x3249d0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3249CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3249D4u;
    // 0x3249d4: 0x0  nop
    ctx->pc = 0x3249d4u;
    // NOP
    ctx->pc = 0x3249d8u;
}
