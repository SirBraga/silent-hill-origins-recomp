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

// Function: sub_00282F28
// Address: 0x282f28 - 0x283018
void sub_00282F28_0x282f28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00282F28_0x282f28");
#endif

    switch (ctx->pc) {
        case 0x282f28u: goto label_282f28;
        case 0x282f2cu: goto label_282f2c;
        case 0x282f30u: goto label_282f30;
        case 0x282f34u: goto label_282f34;
        case 0x282f38u: goto label_282f38;
        case 0x282f3cu: goto label_282f3c;
        case 0x282f40u: goto label_282f40;
        case 0x282f44u: goto label_282f44;
        case 0x282f48u: goto label_282f48;
        case 0x282f4cu: goto label_282f4c;
        case 0x282f50u: goto label_282f50;
        case 0x282f54u: goto label_282f54;
        case 0x282f58u: goto label_282f58;
        case 0x282f5cu: goto label_282f5c;
        case 0x282f60u: goto label_282f60;
        case 0x282f64u: goto label_282f64;
        case 0x282f68u: goto label_282f68;
        case 0x282f6cu: goto label_282f6c;
        case 0x282f70u: goto label_282f70;
        case 0x282f74u: goto label_282f74;
        case 0x282f78u: goto label_282f78;
        case 0x282f7cu: goto label_282f7c;
        case 0x282f80u: goto label_282f80;
        case 0x282f84u: goto label_282f84;
        case 0x282f88u: goto label_282f88;
        case 0x282f8cu: goto label_282f8c;
        case 0x282f90u: goto label_282f90;
        case 0x282f94u: goto label_282f94;
        case 0x282f98u: goto label_282f98;
        case 0x282f9cu: goto label_282f9c;
        case 0x282fa0u: goto label_282fa0;
        case 0x282fa4u: goto label_282fa4;
        case 0x282fa8u: goto label_282fa8;
        case 0x282facu: goto label_282fac;
        case 0x282fb0u: goto label_282fb0;
        case 0x282fb4u: goto label_282fb4;
        case 0x282fb8u: goto label_282fb8;
        case 0x282fbcu: goto label_282fbc;
        case 0x282fc0u: goto label_282fc0;
        case 0x282fc4u: goto label_282fc4;
        case 0x282fc8u: goto label_282fc8;
        case 0x282fccu: goto label_282fcc;
        case 0x282fd0u: goto label_282fd0;
        case 0x282fd4u: goto label_282fd4;
        case 0x282fd8u: goto label_282fd8;
        case 0x282fdcu: goto label_282fdc;
        case 0x282fe0u: goto label_282fe0;
        case 0x282fe4u: goto label_282fe4;
        case 0x282fe8u: goto label_282fe8;
        case 0x282fecu: goto label_282fec;
        case 0x282ff0u: goto label_282ff0;
        case 0x282ff4u: goto label_282ff4;
        case 0x282ff8u: goto label_282ff8;
        case 0x282ffcu: goto label_282ffc;
        case 0x283000u: goto label_283000;
        case 0x283004u: goto label_283004;
        case 0x283008u: goto label_283008;
        case 0x28300cu: goto label_28300c;
        case 0x283010u: goto label_283010;
        case 0x283014u: goto label_283014;
        default: break;
    }

    ctx->pc = 0x282f28u;

label_282f28:
    // 0x282f28: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x282f28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_282f2c:
    // 0x282f2c: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x282f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
label_282f30:
    // 0x282f30: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x282f30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_282f34:
    // 0x282f34: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x282f34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_282f38:
    // 0x282f38: 0x2471e6e0  addiu       $s1, $v1, -0x1920
    ctx->pc = 0x282f38u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960864));
label_282f3c:
    // 0x282f3c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x282f3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_282f40:
    // 0x282f40: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x282f40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_282f44:
    // 0x282f44: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x282f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_282f48:
    // 0x282f48: 0x14400028  bnez        $v0, . + 4 + (0x28 << 2)
label_282f4c:
    if (ctx->pc == 0x282F4Cu) {
        ctx->pc = 0x282F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282F48u;
        // 0x282f4c: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x282F50u;
        goto label_282f50;
    }
    ctx->pc = 0x282F48u;
    {
        const bool branch_taken_0x282f48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x282F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282F48u;
        // 0x282f4c: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282f48) {
            ctx->pc = 0x282FECu;
            goto label_282fec;
        }
    }
    ctx->pc = 0x282F50u;
label_282f50:
    // 0x282f50: 0x24040120  addiu       $a0, $zero, 0x120
    ctx->pc = 0x282f50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
label_282f54:
    // 0x282f54: 0xc0895f6  jal         func_2257D8
label_282f58:
    if (ctx->pc == 0x282F58u) {
        ctx->pc = 0x282F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282F54u;
        // 0x282f58: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x282F5Cu;
        goto label_282f5c;
    }
    ctx->pc = 0x282F54u;
    SET_GPR_U32(ctx, 31, 0x282F5Cu);
    ctx->pc = 0x282F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282F54u;
    // 0x282f58: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2257D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2257D8u, 0x282F54u, 0x282F5Cu)) {
        return;
    }
    ctx->pc = 0x282F5Cu;
label_282f5c:
    // 0x282f5c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x282f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_282f60:
    // 0x282f60: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x282f60u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_282f64:
    // 0x282f64: 0x62800b  movn        $s0, $v1, $v0
    ctx->pc = 0x282f64u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3));
label_282f68:
    // 0x282f68: 0xc0895f6  jal         func_2257D8
label_282f6c:
    if (ctx->pc == 0x282F6Cu) {
        ctx->pc = 0x282F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282F68u;
        // 0x282f6c: 0x2404012e  addiu       $a0, $zero, 0x12E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 302));
        ctx->in_delay_slot = false;
        ctx->pc = 0x282F70u;
        goto label_282f70;
    }
    ctx->pc = 0x282F68u;
    SET_GPR_U32(ctx, 31, 0x282F70u);
    ctx->pc = 0x282F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282F68u;
    // 0x282f6c: 0x2404012e  addiu       $a0, $zero, 0x12E (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 302));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2257D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2257D8u, 0x282F68u, 0x282F70u)) {
        return;
    }
    ctx->pc = 0x282F70u;
label_282f70:
    // 0x282f70: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x282f70u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_282f74:
    // 0x282f74: 0x36040004  ori         $a0, $s0, 0x4
    ctx->pc = 0x282f74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)4);
label_282f78:
    // 0x282f78: 0xc0a0e66  jal         func_283998
label_282f7c:
    if (ctx->pc == 0x282F7Cu) {
        ctx->pc = 0x282F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282F78u;
        // 0x282f7c: 0x202200a  movz        $a0, $s0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x282F80u;
        goto label_282f80;
    }
    ctx->pc = 0x282F78u;
    SET_GPR_U32(ctx, 31, 0x282F80u);
    ctx->pc = 0x282F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282F78u;
    // 0x282f7c: 0x202200a  movz        $a0, $s0, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x283998u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x283998u, 0x282F78u, 0x282F80u)) {
        return;
    }
    ctx->pc = 0x282F80u;
label_282f80:
    // 0x282f80: 0x8f878850  lw          $a3, -0x77B0($gp)
    ctx->pc = 0x282f80u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936656)));
label_282f84:
    // 0x282f84: 0x3c080070  lui         $t0, 0x70
    ctx->pc = 0x282f84u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)112 << 16));
label_282f88:
    // 0x282f88: 0x8f85884c  lw          $a1, -0x77B4($gp)
    ctx->pc = 0x282f88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936652)));
label_282f8c:
    // 0x282f8c: 0x3c090004  lui         $t1, 0x4
    ctx->pc = 0x282f8cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4 << 16));
label_282f90:
    // 0x282f90: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x282f90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_282f94:
    // 0x282f94: 0x25086358  addiu       $t0, $t0, 0x6358
    ctx->pc = 0x282f94u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 25432));
label_282f98:
    // 0x282f98: 0x35290116  ori         $t1, $t1, 0x116
    ctx->pc = 0x282f98u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)278);
label_282f9c:
    // 0x282f9c: 0xc0930ce  jal         func_24C338
label_282fa0:
    if (ctx->pc == 0x282FA0u) {
        ctx->pc = 0x282FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282F9Cu;
        // 0x282fa0: 0x24040048  addiu       $a0, $zero, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x282FA4u;
        goto label_282fa4;
    }
    ctx->pc = 0x282F9Cu;
    SET_GPR_U32(ctx, 31, 0x282FA4u);
    ctx->pc = 0x282FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282F9Cu;
    // 0x282fa0: 0x24040048  addiu       $a0, $zero, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C338u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24C338u, 0x282F9Cu, 0x282FA4u)) {
        return;
    }
    ctx->pc = 0x282FA4u;
label_282fa4:
    // 0x282fa4: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x282fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_282fa8:
    // 0x282fa8: 0x3c050004  lui         $a1, 0x4
    ctx->pc = 0x282fa8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4 << 16));
label_282fac:
    // 0x282fac: 0x8c6610d0  lw          $a2, 0x10D0($v1)
    ctx->pc = 0x282facu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4304)));
label_282fb0:
    // 0x282fb0: 0x2404400f  addiu       $a0, $zero, 0x400F
    ctx->pc = 0x282fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16399));
label_282fb4:
    // 0x282fb4: 0x34a50116  ori         $a1, $a1, 0x116
    ctx->pc = 0x282fb4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)278);
label_282fb8:
    // 0x282fb8: 0xc0f809  jalr        $a2
label_282fbc:
    if (ctx->pc == 0x282FBCu) {
        ctx->pc = 0x282FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282FB8u;
        // 0x282fbc: 0xae220018  sw          $v0, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x282FC0u;
        goto label_282fc0;
    }
    ctx->pc = 0x282FB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x282FC0u);
        ctx->pc = 0x282FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282FB8u;
        // 0x282fbc: 0xae220018  sw          $v0, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x282FB8u, 0x282FC0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x282FC0u;
label_282fc0:
    // 0x282fc0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x282fc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_282fc4:
    // 0x282fc4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x282fc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_282fc8:
    // 0x282fc8: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x282fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
label_282fcc:
    // 0x282fcc: 0xc0c493d  jal         func_3124F4
label_282fd0:
    if (ctx->pc == 0x282FD0u) {
        ctx->pc = 0x282FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282FCCu;
        // 0x282fd0: 0x2406400f  addiu       $a2, $zero, 0x400F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16399));
        ctx->in_delay_slot = false;
        ctx->pc = 0x282FD4u;
        goto label_282fd4;
    }
    ctx->pc = 0x282FCCu;
    SET_GPR_U32(ctx, 31, 0x282FD4u);
    ctx->pc = 0x282FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282FCCu;
    // 0x282fd0: 0x2406400f  addiu       $a2, $zero, 0x400F (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16399));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x282FCCu, 0x282FD4u)) {
        return;
    }
    ctx->pc = 0x282FD4u;
label_282fd4:
    // 0x282fd4: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x282fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_282fd8:
    // 0x282fd8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x282fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_282fdc:
    // 0x282fdc: 0x3442fff0  ori         $v0, $v0, 0xFFF0
    ctx->pc = 0x282fdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65520);
label_282fe0:
    // 0x282fe0: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x282fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
label_282fe4:
    // 0x282fe4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x282fe4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_282fe8:
    // 0x282fe8: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x282fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
label_282fec:
    // 0x282fec: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x282fecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_282ff0:
    // 0x282ff0: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x282ff0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_282ff4:
    // 0x282ff4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x282ff4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_282ff8:
    // 0x282ff8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x282ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_282ffc:
    // 0x282ffc: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x282ffcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_283000:
    // 0x283000: 0xae230020  sw          $v1, 0x20($s1)
    ctx->pc = 0x283000u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 3));
label_283004:
    // 0x283004: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x283004u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_283008:
    // 0x283008: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x283008u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_28300c:
    // 0x28300c: 0x3e00008  jr          $ra
label_283010:
    if (ctx->pc == 0x283010u) {
        ctx->pc = 0x283010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28300Cu;
        // 0x283010: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x283014u;
        goto label_283014;
    }
    ctx->pc = 0x28300Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x283010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28300Cu;
        // 0x283010: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28300Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x283014u;
label_283014:
    // 0x283014: 0x0  nop
    ctx->pc = 0x283014u;
    // NOP
    ctx->pc = 0x283018u;
}
