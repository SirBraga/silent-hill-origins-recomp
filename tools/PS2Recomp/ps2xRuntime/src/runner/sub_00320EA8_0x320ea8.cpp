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

// Function: sub_00320EA8
// Address: 0x320ea8 - 0x321000
void sub_00320EA8_0x320ea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00320EA8_0x320ea8");
#endif

    switch (ctx->pc) {
        case 0x320ec0u: goto label_320ec0;
        case 0x320f08u: goto label_320f08;
        case 0x320f18u: goto label_320f18;
        case 0x320f28u: goto label_320f28;
        case 0x320f38u: goto label_320f38;
        case 0x320f40u: goto label_320f40;
        case 0x320f48u: goto label_320f48;
        case 0x320f58u: goto label_320f58;
        case 0x320f68u: goto label_320f68;
        case 0x320f78u: goto label_320f78;
        case 0x320f88u: goto label_320f88;
        case 0x320f98u: goto label_320f98;
        case 0x320fa8u: goto label_320fa8;
        case 0x320fb8u: goto label_320fb8;
        case 0x320fc8u: goto label_320fc8;
        case 0x320fd8u: goto label_320fd8;
        case 0x320fe8u: goto label_320fe8;
        case 0x320ff8u: goto label_320ff8;
        default: break;
    }

    ctx->pc = 0x320ea8u;

    // 0x320ea8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x320ea8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x320eac: 0x63040  sll         $a2, $a2, 1
    ctx->pc = 0x320eacu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x320eb0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x320eb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x320eb4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x320eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x320eb8: 0xc075fdc  jal         func_1D7F70
    ctx->pc = 0x320EB8u;
    SET_GPR_U32(ctx, 31, 0x320EC0u);
    ctx->pc = 0x320EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320EB8u;
    // 0x320ebc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x320EB8u, 0x320EC0u)) {
        return;
    }
    ctx->pc = 0x320EC0u;
label_320ec0:
    // 0x320ec0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x320ec0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320ec4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x320ec4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x320ec8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x320ec8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x320ecc: 0x3e00008  jr          $ra
    ctx->pc = 0x320ECCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x320ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320ECCu;
        // 0x320ed0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x320ECCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x320ED4u;
    // 0x320ed4: 0x0  nop
    ctx->pc = 0x320ed4u;
    // NOP
    // 0x320ed8: 0x0  nop
    ctx->pc = 0x320ed8u;
    // NOP
    // 0x320edc: 0x0  nop
    ctx->pc = 0x320edcu;
    // NOP
    // 0x320ee0: 0x0  nop
    ctx->pc = 0x320ee0u;
    // NOP
    // 0x320ee4: 0x0  nop
    ctx->pc = 0x320ee4u;
    // NOP
    // 0x320ee8: 0x0  nop
    ctx->pc = 0x320ee8u;
    // NOP
    // 0x320eec: 0x0  nop
    ctx->pc = 0x320eecu;
    // NOP
    // 0x320ef0: 0x0  nop
    ctx->pc = 0x320ef0u;
    // NOP
    // 0x320ef4: 0x0  nop
    ctx->pc = 0x320ef4u;
    // NOP
    // 0x320ef8: 0x0  nop
    ctx->pc = 0x320ef8u;
    // NOP
    // 0x320efc: 0x0  nop
    ctx->pc = 0x320efcu;
    // NOP
    // 0x320f00: 0x24030000  addiu       $v1, $zero, 0x0
    ctx->pc = 0x320f00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x320f04: 0xc  syscall     0
    ctx->pc = 0x320f04u;
    ctx->pc = 0x320F08u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_320f08:
    // 0x320f08: 0x3e00008  jr          $ra
    ctx->pc = 0x320F08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x320F08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x320F10u;
    // 0x320f10: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x320f10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x320f14: 0xc  syscall     0
    ctx->pc = 0x320f14u;
    ctx->pc = 0x320F18u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_320f18:
    // 0x320f18: 0x3e00008  jr          $ra
    ctx->pc = 0x320F18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x320F18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x320F20u;
    // 0x320f20: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x320f20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x320f24: 0xc  syscall     0
    ctx->pc = 0x320f24u;
    ctx->pc = 0x320F28u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_320f28:
    // 0x320f28: 0x3e00008  jr          $ra
    ctx->pc = 0x320F28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x320F28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x320F30u;
    // 0x320f30: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x320f30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x320f34: 0xc  syscall     0
    ctx->pc = 0x320f34u;
    ctx->pc = 0x320F38u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_320f38:
    // 0x320f38: 0x3e00008  jr          $ra
    ctx->pc = 0x320F38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x320F38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x320F40u;
label_320f40:
    // 0x320f40: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x320f40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x320f44: 0xc  syscall     0
    ctx->pc = 0x320f44u;
    ctx->pc = 0x320F48u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_320f48:
    // 0x320f48: 0x3e00008  jr          $ra
    ctx->pc = 0x320F48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x320F48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x320F50u;
    // 0x320f50: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x320f50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x320f54: 0xc  syscall     0
    ctx->pc = 0x320f54u;
    ctx->pc = 0x320F58u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_320f58:
    // 0x320f58: 0x3e00008  jr          $ra
    ctx->pc = 0x320F58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x320F58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x320F60u;
    // 0x320f60: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x320f60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x320f64: 0xc  syscall     0
    ctx->pc = 0x320f64u;
    ctx->pc = 0x320F68u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_320f68:
    // 0x320f68: 0x3e00008  jr          $ra
    ctx->pc = 0x320F68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x320F68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x320F70u;
    // 0x320f70: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x320f70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x320f74: 0xc  syscall     0
    ctx->pc = 0x320f74u;
    ctx->pc = 0x320F78u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_320f78:
    // 0x320f78: 0x3e00008  jr          $ra
    ctx->pc = 0x320F78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x320F78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x320F80u;
    // 0x320f80: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x320f80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x320f84: 0xc  syscall     0
    ctx->pc = 0x320f84u;
    ctx->pc = 0x320F88u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_320f88:
    // 0x320f88: 0x3e00008  jr          $ra
    ctx->pc = 0x320F88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x320F88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x320F90u;
    // 0x320f90: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x320f90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x320f94: 0xc  syscall     0
    ctx->pc = 0x320f94u;
    ctx->pc = 0x320F98u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_320f98:
    // 0x320f98: 0x3e00008  jr          $ra
    ctx->pc = 0x320F98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x320F98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x320FA0u;
    // 0x320fa0: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x320fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x320fa4: 0xc  syscall     0
    ctx->pc = 0x320fa4u;
    ctx->pc = 0x320FA8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_320fa8:
    // 0x320fa8: 0x3e00008  jr          $ra
    ctx->pc = 0x320FA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x320FA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x320FB0u;
    // 0x320fb0: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x320fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x320fb4: 0xc  syscall     0
    ctx->pc = 0x320fb4u;
    ctx->pc = 0x320FB8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_320fb8:
    // 0x320fb8: 0x3e00008  jr          $ra
    ctx->pc = 0x320FB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x320FB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x320FC0u;
    // 0x320fc0: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x320fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x320fc4: 0xc  syscall     0
    ctx->pc = 0x320fc4u;
    ctx->pc = 0x320FC8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_320fc8:
    // 0x320fc8: 0x3e00008  jr          $ra
    ctx->pc = 0x320FC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x320FC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x320FD0u;
    // 0x320fd0: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x320fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x320fd4: 0xc  syscall     0
    ctx->pc = 0x320fd4u;
    ctx->pc = 0x320FD8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_320fd8:
    // 0x320fd8: 0x3e00008  jr          $ra
    ctx->pc = 0x320FD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x320FD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x320FE0u;
    // 0x320fe0: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x320fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x320fe4: 0xc  syscall     0
    ctx->pc = 0x320fe4u;
    ctx->pc = 0x320FE8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_320fe8:
    // 0x320fe8: 0x3e00008  jr          $ra
    ctx->pc = 0x320FE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x320FE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x320FF0u;
    // 0x320ff0: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x320ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x320ff4: 0xc  syscall     0
    ctx->pc = 0x320ff4u;
    ctx->pc = 0x320FF8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_320ff8:
    // 0x320ff8: 0x3e00008  jr          $ra
    ctx->pc = 0x320FF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x320FF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x321000u;
}
