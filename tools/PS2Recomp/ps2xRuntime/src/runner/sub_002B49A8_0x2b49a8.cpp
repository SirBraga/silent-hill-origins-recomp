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

// Function: sub_002B49A8
// Address: 0x2b49a8 - 0x2b4a18
void sub_002B49A8_0x2b49a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B49A8_0x2b49a8");
#endif

    switch (ctx->pc) {
        case 0x2b49a8u: goto label_2b49a8;
        case 0x2b49acu: goto label_2b49ac;
        case 0x2b49b0u: goto label_2b49b0;
        case 0x2b49b4u: goto label_2b49b4;
        case 0x2b49b8u: goto label_2b49b8;
        case 0x2b49bcu: goto label_2b49bc;
        case 0x2b49c0u: goto label_2b49c0;
        case 0x2b49c4u: goto label_2b49c4;
        case 0x2b49c8u: goto label_2b49c8;
        case 0x2b49ccu: goto label_2b49cc;
        case 0x2b49d0u: goto label_2b49d0;
        case 0x2b49d4u: goto label_2b49d4;
        case 0x2b49d8u: goto label_2b49d8;
        case 0x2b49dcu: goto label_2b49dc;
        case 0x2b49e0u: goto label_2b49e0;
        case 0x2b49e4u: goto label_2b49e4;
        case 0x2b49e8u: goto label_2b49e8;
        case 0x2b49ecu: goto label_2b49ec;
        case 0x2b49f0u: goto label_2b49f0;
        case 0x2b49f4u: goto label_2b49f4;
        case 0x2b49f8u: goto label_2b49f8;
        case 0x2b49fcu: goto label_2b49fc;
        case 0x2b4a00u: goto label_2b4a00;
        case 0x2b4a04u: goto label_2b4a04;
        case 0x2b4a08u: goto label_2b4a08;
        case 0x2b4a0cu: goto label_2b4a0c;
        case 0x2b4a10u: goto label_2b4a10;
        case 0x2b4a14u: goto label_2b4a14;
        default: break;
    }

    ctx->pc = 0x2b49a8u;

label_2b49a8:
    // 0x2b49a8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2b49a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2b49ac:
    // 0x2b49ac: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x2b49acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_2b49b0:
    // 0x2b49b0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2b49b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_2b49b4:
    // 0x2b49b4: 0x3c060003  lui         $a2, 0x3
    ctx->pc = 0x2b49b4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
label_2b49b8:
    // 0x2b49b8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2b49b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_2b49bc:
    // 0x2b49bc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2b49bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2b49c0:
    // 0x2b49c0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2b49c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2b49c4:
    // 0x2b49c4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2b49c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_2b49c8:
    // 0x2b49c8: 0x2328018  mult        $s0, $s1, $s2
    ctx->pc = 0x2b49c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
label_2b49cc:
    // 0x2b49cc: 0x8c6210dc  lw          $v0, 0x10DC($v1)
    ctx->pc = 0x2b49ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4316)));
label_2b49d0:
    // 0x2b49d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b49d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2b49d4:
    // 0x2b49d4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2b49d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2b49d8:
    // 0x2b49d8: 0x34c60900  ori         $a2, $a2, 0x900
    ctx->pc = 0x2b49d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)2304);
label_2b49dc:
    // 0x2b49dc: 0x2610001f  addiu       $s0, $s0, 0x1F
    ctx->pc = 0x2b49dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 31));
label_2b49e0:
    // 0x2b49e0: 0x108142  srl         $s0, $s0, 5
    ctx->pc = 0x2b49e0u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), 5));
label_2b49e4:
    // 0x2b49e4: 0x40f809  jalr        $v0
label_2b49e8:
    if (ctx->pc == 0x2B49E8u) {
        ctx->pc = 0x2B49E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B49E4u;
        // 0x2b49e8: 0x26040003  addiu       $a0, $s0, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B49ECu;
        goto label_2b49ec;
    }
    ctx->pc = 0x2B49E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2B49ECu);
        ctx->pc = 0x2B49E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B49E4u;
        // 0x2b49e8: 0x26040003  addiu       $a0, $s0, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B49E4u, 0x2B49ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B49ECu;
label_2b49ec:
    // 0x2b49ec: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2b49ecu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b49f0:
    // 0x2b49f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b49f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2b49f4:
    // 0x2b49f4: 0xac710000  sw          $s1, 0x0($v1)
    ctx->pc = 0x2b49f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
label_2b49f8:
    // 0x2b49f8: 0xac720004  sw          $s2, 0x4($v1)
    ctx->pc = 0x2b49f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 18));
label_2b49fc:
    // 0x2b49fc: 0xac700008  sw          $s0, 0x8($v1)
    ctx->pc = 0x2b49fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 16));
label_2b4a00:
    // 0x2b4a00: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2b4a00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2b4a04:
    // 0x2b4a04: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2b4a04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2b4a08:
    // 0x2b4a08: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2b4a08u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2b4a0c:
    // 0x2b4a0c: 0x3e00008  jr          $ra
label_2b4a10:
    if (ctx->pc == 0x2B4A10u) {
        ctx->pc = 0x2B4A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4A0Cu;
        // 0x2b4a10: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B4A14u;
        goto label_2b4a14;
    }
    ctx->pc = 0x2B4A0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B4A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4A0Cu;
        // 0x2b4a10: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B4A0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B4A14u;
label_2b4a14:
    // 0x2b4a14: 0x0  nop
    ctx->pc = 0x2b4a14u;
    // NOP
    ctx->pc = 0x2b4a18u;
}
