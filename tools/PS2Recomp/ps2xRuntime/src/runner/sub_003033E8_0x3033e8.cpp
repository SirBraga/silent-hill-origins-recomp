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

// Function: sub_003033E8
// Address: 0x3033e8 - 0x303470
void sub_003033E8_0x3033e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003033E8_0x3033e8");
#endif

    switch (ctx->pc) {
        case 0x303450u: goto label_303450;
        case 0x30345cu: goto label_30345c;
        default: break;
    }

    ctx->pc = 0x3033e8u;

    // 0x3033e8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3033e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x3033ec: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x3033ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x3033f0: 0x8ca53d54  lw          $a1, 0x3D54($a1)
    ctx->pc = 0x3033f0u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6B3D54u));
    // 0x3033f4: 0x3442fffc  ori         $v0, $v0, 0xFFFC
    ctx->pc = 0x3033f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
    // 0x3033f8: 0x24840003  addiu       $a0, $a0, 0x3
    ctx->pc = 0x3033f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x3033fc: 0x823024  and         $a2, $a0, $v0
    ctx->pc = 0x3033fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x303400: 0x8f838ce0  lw          $v1, -0x7320($gp)
    ctx->pc = 0x303400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937824)));
    // 0x303404: 0xa61021  addu        $v0, $a1, $a2
    ctx->pc = 0x303404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x303408: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x303408u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x30340c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x30340cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x303410: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x303410u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x303414: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x303414u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x303418: 0xac223d54  sw          $v0, 0x3D54($at)
    ctx->pc = 0x303418u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B3D54u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B3D54u, _value); } while (0);
    // 0x30341c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x30341Cu;
    {
        const bool branch_taken_0x30341c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x303420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30341Cu;
        // 0x303420: 0x461023  subu        $v0, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30341c) {
            ctx->pc = 0x303430u;
            goto label_303430;
        }
    }
    ctx->pc = 0x303424u;
    // 0x303424: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x303424u;
    {
        const bool branch_taken_0x303424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x303428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303424u;
        // 0x303428: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x303424) {
            ctx->pc = 0x303464u;
            goto label_303464;
        }
    }
    ctx->pc = 0x30342Cu;
    // 0x30342c: 0x0  nop
    ctx->pc = 0x30342cu;
    // NOP
label_303430:
    // 0x303430: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x303430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x303434: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x303434u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x303438: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x303438u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x30343c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x30343cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303440: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x303440u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x303444: 0xac223d54  sw          $v0, 0x3D54($at)
    ctx->pc = 0x303444u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B3D54u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B3D54u, _value); } while (0);
    // 0x303448: 0xc092848  jal         func_24A120
    ctx->pc = 0x303448u;
    SET_GPR_U32(ctx, 31, 0x303450u);
    ctx->pc = 0x30344Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303448u;
    // 0x30344c: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x303448u, 0x303450u)) {
        return;
    }
    ctx->pc = 0x303450u;
label_303450:
    // 0x303450: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x303450u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303454: 0xc09281a  jal         func_24A068
    ctx->pc = 0x303454u;
    SET_GPR_U32(ctx, 31, 0x30345Cu);
    ctx->pc = 0x303458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303454u;
    // 0x303458: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x303454u, 0x30345Cu)) {
        return;
    }
    ctx->pc = 0x30345Cu;
label_30345c:
    // 0x30345c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x30345cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303460: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x303460u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_303464:
    // 0x303464: 0x3e00008  jr          $ra
    ctx->pc = 0x303464u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x303468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x303464u;
        // 0x303468: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x303464u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30346Cu;
    // 0x30346c: 0x0  nop
    ctx->pc = 0x30346cu;
    // NOP
    ctx->pc = 0x303470u;
}
