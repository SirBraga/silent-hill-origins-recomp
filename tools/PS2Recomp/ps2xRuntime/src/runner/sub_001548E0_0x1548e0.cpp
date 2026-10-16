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

// Function: sub_001548E0
// Address: 0x1548e0 - 0x154a30
void sub_001548E0_0x1548e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001548E0_0x1548e0");
#endif

    switch (ctx->pc) {
        case 0x1548e0u: goto label_1548e0;
        case 0x1548e4u: goto label_1548e4;
        case 0x1548e8u: goto label_1548e8;
        case 0x1548ecu: goto label_1548ec;
        case 0x1548f0u: goto label_1548f0;
        case 0x1548f4u: goto label_1548f4;
        case 0x1548f8u: goto label_1548f8;
        case 0x1548fcu: goto label_1548fc;
        case 0x154900u: goto label_154900;
        case 0x154904u: goto label_154904;
        case 0x154908u: goto label_154908;
        case 0x15490cu: goto label_15490c;
        case 0x154910u: goto label_154910;
        case 0x154914u: goto label_154914;
        case 0x154918u: goto label_154918;
        case 0x15491cu: goto label_15491c;
        case 0x154920u: goto label_154920;
        case 0x154924u: goto label_154924;
        case 0x154928u: goto label_154928;
        case 0x15492cu: goto label_15492c;
        case 0x154930u: goto label_154930;
        case 0x154934u: goto label_154934;
        case 0x154938u: goto label_154938;
        case 0x15493cu: goto label_15493c;
        case 0x154940u: goto label_154940;
        case 0x154944u: goto label_154944;
        case 0x154948u: goto label_154948;
        case 0x15494cu: goto label_15494c;
        case 0x154950u: goto label_154950;
        case 0x154954u: goto label_154954;
        case 0x154958u: goto label_154958;
        case 0x15495cu: goto label_15495c;
        case 0x154960u: goto label_154960;
        case 0x154964u: goto label_154964;
        case 0x154968u: goto label_154968;
        case 0x15496cu: goto label_15496c;
        case 0x154970u: goto label_154970;
        case 0x154974u: goto label_154974;
        case 0x154978u: goto label_154978;
        case 0x15497cu: goto label_15497c;
        case 0x154980u: goto label_154980;
        case 0x154984u: goto label_154984;
        case 0x154988u: goto label_154988;
        case 0x15498cu: goto label_15498c;
        case 0x154990u: goto label_154990;
        case 0x154994u: goto label_154994;
        case 0x154998u: goto label_154998;
        case 0x15499cu: goto label_15499c;
        case 0x1549a0u: goto label_1549a0;
        case 0x1549a4u: goto label_1549a4;
        case 0x1549a8u: goto label_1549a8;
        case 0x1549acu: goto label_1549ac;
        case 0x1549b0u: goto label_1549b0;
        case 0x1549b4u: goto label_1549b4;
        case 0x1549b8u: goto label_1549b8;
        case 0x1549bcu: goto label_1549bc;
        case 0x1549c0u: goto label_1549c0;
        case 0x1549c4u: goto label_1549c4;
        case 0x1549c8u: goto label_1549c8;
        case 0x1549ccu: goto label_1549cc;
        case 0x1549d0u: goto label_1549d0;
        case 0x1549d4u: goto label_1549d4;
        case 0x1549d8u: goto label_1549d8;
        case 0x1549dcu: goto label_1549dc;
        case 0x1549e0u: goto label_1549e0;
        case 0x1549e4u: goto label_1549e4;
        case 0x1549e8u: goto label_1549e8;
        case 0x1549ecu: goto label_1549ec;
        case 0x1549f0u: goto label_1549f0;
        case 0x1549f4u: goto label_1549f4;
        case 0x1549f8u: goto label_1549f8;
        case 0x1549fcu: goto label_1549fc;
        case 0x154a00u: goto label_154a00;
        case 0x154a04u: goto label_154a04;
        case 0x154a08u: goto label_154a08;
        case 0x154a0cu: goto label_154a0c;
        case 0x154a10u: goto label_154a10;
        case 0x154a14u: goto label_154a14;
        case 0x154a18u: goto label_154a18;
        case 0x154a1cu: goto label_154a1c;
        case 0x154a20u: goto label_154a20;
        case 0x154a24u: goto label_154a24;
        case 0x154a28u: goto label_154a28;
        case 0x154a2cu: goto label_154a2c;
        default: break;
    }

    ctx->pc = 0x1548e0u;

label_1548e0:
    // 0x1548e0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1548e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_1548e4:
    // 0x1548e4: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1548e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_1548e8:
    // 0x1548e8: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1548e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_1548ec:
    // 0x1548ec: 0x3c100073  lui         $s0, 0x73
    ctx->pc = 0x1548ecu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)115 << 16));
label_1548f0:
    // 0x1548f0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1548f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_1548f4:
    // 0x1548f4: 0x26100fd8  addiu       $s0, $s0, 0xFD8
    ctx->pc = 0x1548f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4056));
label_1548f8:
    // 0x1548f8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1548f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1548fc:
    // 0x1548fc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1548fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_154900:
    // 0x154900: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x154900u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_154904:
    // 0x154904: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x154904u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_154908:
    // 0x154908: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x154908u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_15490c:
    // 0x15490c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x15490cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_154910:
    // 0x154910: 0x40f809  jalr        $v0
label_154914:
    if (ctx->pc == 0x154914u) {
        ctx->pc = 0x154914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154910u;
        // 0x154914: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154918u;
        goto label_154918;
    }
    ctx->pc = 0x154910u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x154918u);
        ctx->pc = 0x154914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154910u;
        // 0x154914: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x154910u, 0x154918u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x154918u;
label_154918:
    // 0x154918: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x154918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_15491c:
    // 0x15491c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x15491cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_154920:
    // 0x154920: 0x40f809  jalr        $v0
label_154924:
    if (ctx->pc == 0x154924u) {
        ctx->pc = 0x154924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154920u;
        // 0x154924: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154928u;
        goto label_154928;
    }
    ctx->pc = 0x154920u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x154928u);
        ctx->pc = 0x154924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154920u;
        // 0x154924: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x154920u, 0x154928u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x154928u;
label_154928:
    // 0x154928: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x154928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_15492c:
    // 0x15492c: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x15492cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_154930:
    // 0x154930: 0x40f809  jalr        $v0
label_154934:
    if (ctx->pc == 0x154934u) {
        ctx->pc = 0x154934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154930u;
        // 0x154934: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154938u;
        goto label_154938;
    }
    ctx->pc = 0x154930u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x154938u);
        ctx->pc = 0x154934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154930u;
        // 0x154934: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x154930u, 0x154938u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x154938u;
label_154938:
    // 0x154938: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x154938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_15493c:
    // 0x15493c: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x15493cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_154940:
    // 0x154940: 0x40f809  jalr        $v0
label_154944:
    if (ctx->pc == 0x154944u) {
        ctx->pc = 0x154944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154940u;
        // 0x154944: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154948u;
        goto label_154948;
    }
    ctx->pc = 0x154940u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x154948u);
        ctx->pc = 0x154944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154940u;
        // 0x154944: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x154940u, 0x154948u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x154948u;
label_154948:
    // 0x154948: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x154948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_15494c:
    // 0x15494c: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x15494cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_154950:
    // 0x154950: 0x40f809  jalr        $v0
label_154954:
    if (ctx->pc == 0x154954u) {
        ctx->pc = 0x154954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154950u;
        // 0x154954: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154958u;
        goto label_154958;
    }
    ctx->pc = 0x154950u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x154958u);
        ctx->pc = 0x154954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154950u;
        // 0x154954: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x154950u, 0x154958u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x154958u;
label_154958:
    // 0x154958: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x154958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_15495c:
    // 0x15495c: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x15495cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_154960:
    // 0x154960: 0x40f809  jalr        $v0
label_154964:
    if (ctx->pc == 0x154964u) {
        ctx->pc = 0x154964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154960u;
        // 0x154964: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154968u;
        goto label_154968;
    }
    ctx->pc = 0x154960u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x154968u);
        ctx->pc = 0x154964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154960u;
        // 0x154964: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x154960u, 0x154968u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x154968u;
label_154968:
    // 0x154968: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x154968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_15496c:
    // 0x15496c: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x15496cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_154970:
    // 0x154970: 0x40f809  jalr        $v0
label_154974:
    if (ctx->pc == 0x154974u) {
        ctx->pc = 0x154974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154970u;
        // 0x154974: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154978u;
        goto label_154978;
    }
    ctx->pc = 0x154970u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x154978u);
        ctx->pc = 0x154974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154970u;
        // 0x154974: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x154970u, 0x154978u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x154978u;
label_154978:
    // 0x154978: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x154978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_15497c:
    // 0x15497c: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x15497cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_154980:
    // 0x154980: 0x40f809  jalr        $v0
label_154984:
    if (ctx->pc == 0x154984u) {
        ctx->pc = 0x154984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154980u;
        // 0x154984: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154988u;
        goto label_154988;
    }
    ctx->pc = 0x154980u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x154988u);
        ctx->pc = 0x154984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154980u;
        // 0x154984: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x154980u, 0x154988u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x154988u;
label_154988:
    // 0x154988: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x154988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_15498c:
    // 0x15498c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x15498cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_154990:
    // 0x154990: 0x40f809  jalr        $v0
label_154994:
    if (ctx->pc == 0x154994u) {
        ctx->pc = 0x154994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154990u;
        // 0x154994: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154998u;
        goto label_154998;
    }
    ctx->pc = 0x154990u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x154998u);
        ctx->pc = 0x154994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154990u;
        // 0x154994: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x154990u, 0x154998u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x154998u;
label_154998:
    // 0x154998: 0xc6400080  lwc1        $f0, 0x80($s2)
    ctx->pc = 0x154998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_15499c:
    // 0x15499c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x15499cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1549a0:
    // 0x1549a0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1549a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1549a4:
    // 0x1549a4: 0x0  nop
    ctx->pc = 0x1549a4u;
    // NOP
label_1549a8:
    // 0x1549a8: 0x4600a503  div.s       $f20, $f20, $f0
    ctx->pc = 0x1549a8u;
    ctx->f[20] = FPU_DIV_S(ctx, ctx->f[20], ctx->f[0]);
label_1549ac:
    // 0x1549ac: 0xc055490  jal         func_155240
label_1549b0:
    if (ctx->pc == 0x1549B0u) {
        ctx->pc = 0x1549B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1549ACu;
        // 0x1549b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1549B4u;
        goto label_1549b4;
    }
    ctx->pc = 0x1549ACu;
    SET_GPR_U32(ctx, 31, 0x1549B4u);
    ctx->pc = 0x1549B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1549ACu;
    // 0x1549b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155240u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x155240u, 0x1549ACu, 0x1549B4u)) {
        return;
    }
    ctx->pc = 0x1549B4u;
label_1549b4:
    // 0x1549b4: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x1549b4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1549b8:
    // 0x1549b8: 0x922d00ef  lbu         $t5, 0xEF($s1)
    ctx->pc = 0x1549b8u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 239)));
label_1549bc:
    // 0x1549bc: 0x8e220100  lw          $v0, 0x100($s1)
    ctx->pc = 0x1549bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 256)));
label_1549c0:
    // 0x1549c0: 0x2626004c  addiu       $a2, $s1, 0x4C
    ctx->pc = 0x1549c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
label_1549c4:
    // 0x1549c4: 0x8e230104  lw          $v1, 0x104($s1)
    ctx->pc = 0x1549c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
label_1549c8:
    // 0x1549c8: 0x26270088  addiu       $a3, $s1, 0x88
    ctx->pc = 0x1549c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 136));
label_1549cc:
    // 0x1549cc: 0x8e2c0108  lw          $t4, 0x108($s1)
    ctx->pc = 0x1549ccu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 264)));
label_1549d0:
    // 0x1549d0: 0x26250074  addiu       $a1, $s1, 0x74
    ctx->pc = 0x1549d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 116));
label_1549d4:
    // 0x1549d4: 0x8e28009c  lw          $t0, 0x9C($s1)
    ctx->pc = 0x1549d4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_1549d8:
    // 0x1549d8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1549d8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1549dc:
    // 0x1549dc: 0x8e2a0048  lw          $t2, 0x48($s1)
    ctx->pc = 0x1549dcu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
label_1549e0:
    // 0x1549e0: 0x8e2b0044  lw          $t3, 0x44($s1)
    ctx->pc = 0x1549e0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
label_1549e4:
    // 0x1549e4: 0x8e2400a4  lw          $a0, 0xA4($s1)
    ctx->pc = 0x1549e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 164)));
label_1549e8:
    // 0x1549e8: 0xafad0000  sw          $t5, 0x0($sp)
    ctx->pc = 0x1549e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 13));
label_1549ec:
    // 0x1549ec: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x1549ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
label_1549f0:
    // 0x1549f0: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x1549f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_1549f4:
    // 0x1549f4: 0xc055658  jal         func_155960
label_1549f8:
    if (ctx->pc == 0x1549F8u) {
        ctx->pc = 0x1549F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1549F4u;
        // 0x1549f8: 0xafac0018  sw          $t4, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1549FCu;
        goto label_1549fc;
    }
    ctx->pc = 0x1549F4u;
    SET_GPR_U32(ctx, 31, 0x1549FCu);
    ctx->pc = 0x1549F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1549F4u;
    // 0x1549f8: 0xafac0018  sw          $t4, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155960u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x155960u, 0x1549F4u, 0x1549FCu)) {
        return;
    }
    ctx->pc = 0x1549FCu;
label_1549fc:
    // 0x1549fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1549fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_154a00:
    // 0x154a00: 0xc05528c  jal         func_154A30
label_154a04:
    if (ctx->pc == 0x154A04u) {
        ctx->pc = 0x154A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154A00u;
        // 0x154a04: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x154A08u;
        goto label_154a08;
    }
    ctx->pc = 0x154A00u;
    SET_GPR_U32(ctx, 31, 0x154A08u);
    ctx->pc = 0x154A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154A00u;
    // 0x154a04: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x154A30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x154A30u, 0x154A00u, 0x154A08u)) {
        return;
    }
    ctx->pc = 0x154A08u;
label_154a08:
    // 0x154a08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x154a08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_154a0c:
    // 0x154a0c: 0xc05530e  jal         func_154C38
label_154a10:
    if (ctx->pc == 0x154A10u) {
        ctx->pc = 0x154A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154A0Cu;
        // 0x154a10: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x154A14u;
        goto label_154a14;
    }
    ctx->pc = 0x154A0Cu;
    SET_GPR_U32(ctx, 31, 0x154A14u);
    ctx->pc = 0x154A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154A0Cu;
    // 0x154a10: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x154C38u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x154C38u, 0x154A0Cu, 0x154A14u)) {
        return;
    }
    ctx->pc = 0x154A14u;
label_154a14:
    // 0x154a14: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x154a14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_154a18:
    // 0x154a18: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x154a18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_154a1c:
    // 0x154a1c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x154a1cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_154a20:
    // 0x154a20: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x154a20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_154a24:
    // 0x154a24: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x154a24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_154a28:
    // 0x154a28: 0x3e00008  jr          $ra
label_154a2c:
    if (ctx->pc == 0x154A2Cu) {
        ctx->pc = 0x154A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154A28u;
        // 0x154a2c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154A30u;
        goto label_fallthrough_0x154a28;
    }
    ctx->pc = 0x154A28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x154A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154A28u;
        // 0x154a2c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x154A28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x154a28:
    ctx->pc = 0x154A30u;
}
