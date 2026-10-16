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

// Function: sub_00283D58
// Address: 0x283d58 - 0x283f90
void sub_00283D58_0x283d58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00283D58_0x283d58");
#endif

    switch (ctx->pc) {
        case 0x283d58u: goto label_283d58;
        case 0x283d5cu: goto label_283d5c;
        case 0x283d60u: goto label_283d60;
        case 0x283d64u: goto label_283d64;
        case 0x283d68u: goto label_283d68;
        case 0x283d6cu: goto label_283d6c;
        case 0x283d70u: goto label_283d70;
        case 0x283d74u: goto label_283d74;
        case 0x283d78u: goto label_283d78;
        case 0x283d7cu: goto label_283d7c;
        case 0x283d80u: goto label_283d80;
        case 0x283d84u: goto label_283d84;
        case 0x283d88u: goto label_283d88;
        case 0x283d8cu: goto label_283d8c;
        case 0x283d90u: goto label_283d90;
        case 0x283d94u: goto label_283d94;
        case 0x283d98u: goto label_283d98;
        case 0x283d9cu: goto label_283d9c;
        case 0x283da0u: goto label_283da0;
        case 0x283da4u: goto label_283da4;
        case 0x283da8u: goto label_283da8;
        case 0x283dacu: goto label_283dac;
        case 0x283db0u: goto label_283db0;
        case 0x283db4u: goto label_283db4;
        case 0x283db8u: goto label_283db8;
        case 0x283dbcu: goto label_283dbc;
        case 0x283dc0u: goto label_283dc0;
        case 0x283dc4u: goto label_283dc4;
        case 0x283dc8u: goto label_283dc8;
        case 0x283dccu: goto label_283dcc;
        case 0x283dd0u: goto label_283dd0;
        case 0x283dd4u: goto label_283dd4;
        case 0x283dd8u: goto label_283dd8;
        case 0x283ddcu: goto label_283ddc;
        case 0x283de0u: goto label_283de0;
        case 0x283de4u: goto label_283de4;
        case 0x283de8u: goto label_283de8;
        case 0x283decu: goto label_283dec;
        case 0x283df0u: goto label_283df0;
        case 0x283df4u: goto label_283df4;
        case 0x283df8u: goto label_283df8;
        case 0x283dfcu: goto label_283dfc;
        case 0x283e00u: goto label_283e00;
        case 0x283e04u: goto label_283e04;
        case 0x283e08u: goto label_283e08;
        case 0x283e0cu: goto label_283e0c;
        case 0x283e10u: goto label_283e10;
        case 0x283e14u: goto label_283e14;
        case 0x283e18u: goto label_283e18;
        case 0x283e1cu: goto label_283e1c;
        case 0x283e20u: goto label_283e20;
        case 0x283e24u: goto label_283e24;
        case 0x283e28u: goto label_283e28;
        case 0x283e2cu: goto label_283e2c;
        case 0x283e30u: goto label_283e30;
        case 0x283e34u: goto label_283e34;
        case 0x283e38u: goto label_283e38;
        case 0x283e3cu: goto label_283e3c;
        case 0x283e40u: goto label_283e40;
        case 0x283e44u: goto label_283e44;
        case 0x283e48u: goto label_283e48;
        case 0x283e4cu: goto label_283e4c;
        case 0x283e50u: goto label_283e50;
        case 0x283e54u: goto label_283e54;
        case 0x283e58u: goto label_283e58;
        case 0x283e5cu: goto label_283e5c;
        case 0x283e60u: goto label_283e60;
        case 0x283e64u: goto label_283e64;
        case 0x283e68u: goto label_283e68;
        case 0x283e6cu: goto label_283e6c;
        case 0x283e70u: goto label_283e70;
        case 0x283e74u: goto label_283e74;
        case 0x283e78u: goto label_283e78;
        case 0x283e7cu: goto label_283e7c;
        case 0x283e80u: goto label_283e80;
        case 0x283e84u: goto label_283e84;
        case 0x283e88u: goto label_283e88;
        case 0x283e8cu: goto label_283e8c;
        case 0x283e90u: goto label_283e90;
        case 0x283e94u: goto label_283e94;
        case 0x283e98u: goto label_283e98;
        case 0x283e9cu: goto label_283e9c;
        case 0x283ea0u: goto label_283ea0;
        case 0x283ea4u: goto label_283ea4;
        case 0x283ea8u: goto label_283ea8;
        case 0x283eacu: goto label_283eac;
        case 0x283eb0u: goto label_283eb0;
        case 0x283eb4u: goto label_283eb4;
        case 0x283eb8u: goto label_283eb8;
        case 0x283ebcu: goto label_283ebc;
        case 0x283ec0u: goto label_283ec0;
        case 0x283ec4u: goto label_283ec4;
        case 0x283ec8u: goto label_283ec8;
        case 0x283eccu: goto label_283ecc;
        case 0x283ed0u: goto label_283ed0;
        case 0x283ed4u: goto label_283ed4;
        case 0x283ed8u: goto label_283ed8;
        case 0x283edcu: goto label_283edc;
        case 0x283ee0u: goto label_283ee0;
        case 0x283ee4u: goto label_283ee4;
        case 0x283ee8u: goto label_283ee8;
        case 0x283eecu: goto label_283eec;
        case 0x283ef0u: goto label_283ef0;
        case 0x283ef4u: goto label_283ef4;
        case 0x283ef8u: goto label_283ef8;
        case 0x283efcu: goto label_283efc;
        case 0x283f00u: goto label_283f00;
        case 0x283f04u: goto label_283f04;
        case 0x283f08u: goto label_283f08;
        case 0x283f0cu: goto label_283f0c;
        case 0x283f10u: goto label_283f10;
        case 0x283f14u: goto label_283f14;
        case 0x283f18u: goto label_283f18;
        case 0x283f1cu: goto label_283f1c;
        case 0x283f20u: goto label_283f20;
        case 0x283f24u: goto label_283f24;
        case 0x283f28u: goto label_283f28;
        case 0x283f2cu: goto label_283f2c;
        case 0x283f30u: goto label_283f30;
        case 0x283f34u: goto label_283f34;
        case 0x283f38u: goto label_283f38;
        case 0x283f3cu: goto label_283f3c;
        case 0x283f40u: goto label_283f40;
        case 0x283f44u: goto label_283f44;
        case 0x283f48u: goto label_283f48;
        case 0x283f4cu: goto label_283f4c;
        case 0x283f50u: goto label_283f50;
        case 0x283f54u: goto label_283f54;
        case 0x283f58u: goto label_283f58;
        case 0x283f5cu: goto label_283f5c;
        case 0x283f60u: goto label_283f60;
        case 0x283f64u: goto label_283f64;
        case 0x283f68u: goto label_283f68;
        case 0x283f6cu: goto label_283f6c;
        case 0x283f70u: goto label_283f70;
        case 0x283f74u: goto label_283f74;
        case 0x283f78u: goto label_283f78;
        case 0x283f7cu: goto label_283f7c;
        case 0x283f80u: goto label_283f80;
        case 0x283f84u: goto label_283f84;
        case 0x283f88u: goto label_283f88;
        case 0x283f8cu: goto label_283f8c;
        default: break;
    }

    ctx->pc = 0x283d58u;

label_283d58:
    // 0x283d58: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x283d58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_283d5c:
    // 0x283d5c: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x283d5cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_283d60:
    // 0x283d60: 0x3c050004  lui         $a1, 0x4
    ctx->pc = 0x283d60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4 << 16));
label_283d64:
    // 0x283d64: 0x8c6210d0  lw          $v0, 0x10D0($v1)
    ctx->pc = 0x283d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4304)));
label_283d68:
    // 0x283d68: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x283d68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_283d6c:
    // 0x283d6c: 0x24043030  addiu       $a0, $zero, 0x3030
    ctx->pc = 0x283d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12336));
label_283d70:
    // 0x283d70: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x283d70u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_283d74:
    // 0x283d74: 0x40f809  jalr        $v0
label_283d78:
    if (ctx->pc == 0x283D78u) {
        ctx->pc = 0x283D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283D74u;
        // 0x283d78: 0x34a50102  ori         $a1, $a1, 0x102 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)258);
        ctx->in_delay_slot = false;
        ctx->pc = 0x283D7Cu;
        goto label_283d7c;
    }
    ctx->pc = 0x283D74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x283D7Cu);
        ctx->pc = 0x283D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283D74u;
        // 0x283d78: 0x34a50102  ori         $a1, $a1, 0x102 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)258);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x283D74u, 0x283D7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x283D7Cu;
label_283d7c:
    // 0x283d7c: 0x40682d  daddu       $t5, $v0, $zero
    ctx->pc = 0x283d7cu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_283d80:
    // 0x283d80: 0x11a00073  beqz        $t5, . + 4 + (0x73 << 2)
label_283d84:
    if (ctx->pc == 0x283D84u) {
        ctx->pc = 0x283D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283D80u;
        // 0x283d84: 0xaf8d885c  sw          $t5, -0x77A4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936668), GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x283D88u;
        goto label_283d88;
    }
    ctx->pc = 0x283D80u;
    {
        const bool branch_taken_0x283d80 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x283D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283D80u;
        // 0x283d84: 0xaf8d885c  sw          $t5, -0x77A4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936668), GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283d80) {
            ctx->pc = 0x283F50u;
            goto label_283f50;
        }
    }
    ctx->pc = 0x283D88u;
label_283d88:
    // 0x283d88: 0x25a20404  addiu       $v0, $t5, 0x404
    ctx->pc = 0x283d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), 1028));
label_283d8c:
    // 0x283d8c: 0x25a30808  addiu       $v1, $t5, 0x808
    ctx->pc = 0x283d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 13), 2056));
label_283d90:
    // 0x283d90: 0x25a40c0c  addiu       $a0, $t5, 0xC0C
    ctx->pc = 0x283d90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 13), 3084));
label_283d94:
    // 0x283d94: 0x25a51010  addiu       $a1, $t5, 0x1010
    ctx->pc = 0x283d94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 13), 4112));
label_283d98:
    // 0x283d98: 0x25a61414  addiu       $a2, $t5, 0x1414
    ctx->pc = 0x283d98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 13), 5140));
label_283d9c:
    // 0x283d9c: 0x25a71818  addiu       $a3, $t5, 0x1818
    ctx->pc = 0x283d9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 13), 6168));
label_283da0:
    // 0x283da0: 0x25a81c1c  addiu       $t0, $t5, 0x1C1C
    ctx->pc = 0x283da0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 13), 7196));
label_283da4:
    // 0x283da4: 0x25a92020  addiu       $t1, $t5, 0x2020
    ctx->pc = 0x283da4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 13), 8224));
label_283da8:
    // 0x283da8: 0x25aa2424  addiu       $t2, $t5, 0x2424
    ctx->pc = 0x283da8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 13), 9252));
label_283dac:
    // 0x283dac: 0x25ab2828  addiu       $t3, $t5, 0x2828
    ctx->pc = 0x283dacu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 13), 10280));
label_283db0:
    // 0x283db0: 0x25ac2c2c  addiu       $t4, $t5, 0x2C2C
    ctx->pc = 0x283db0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 13), 11308));
label_283db4:
    // 0x283db4: 0x1a0782d  daddu       $t7, $t5, $zero
    ctx->pc = 0x283db4u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
label_283db8:
    // 0x283db8: 0xaf828860  sw          $v0, -0x77A0($gp)
    ctx->pc = 0x283db8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936672), GPR_U32(ctx, 2));
label_283dbc:
    // 0x283dbc: 0x40702d  daddu       $t6, $v0, $zero
    ctx->pc = 0x283dbcu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_283dc0:
    // 0x283dc0: 0xaf838864  sw          $v1, -0x779C($gp)
    ctx->pc = 0x283dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936676), GPR_U32(ctx, 3));
label_283dc4:
    // 0x283dc4: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x283dc4u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_283dc8:
    // 0x283dc8: 0xaf848868  sw          $a0, -0x7798($gp)
    ctx->pc = 0x283dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936680), GPR_U32(ctx, 4));
label_283dcc:
    // 0x283dcc: 0xaf85886c  sw          $a1, -0x7794($gp)
    ctx->pc = 0x283dccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936684), GPR_U32(ctx, 5));
label_283dd0:
    // 0x283dd0: 0xaf868870  sw          $a2, -0x7790($gp)
    ctx->pc = 0x283dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936688), GPR_U32(ctx, 6));
label_283dd4:
    // 0x283dd4: 0xaf878874  sw          $a3, -0x778C($gp)
    ctx->pc = 0x283dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936692), GPR_U32(ctx, 7));
label_283dd8:
    // 0x283dd8: 0xaf888878  sw          $t0, -0x7788($gp)
    ctx->pc = 0x283dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936696), GPR_U32(ctx, 8));
label_283ddc:
    // 0x283ddc: 0xaf89887c  sw          $t1, -0x7784($gp)
    ctx->pc = 0x283ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936700), GPR_U32(ctx, 9));
label_283de0:
    // 0x283de0: 0xaf8a8880  sw          $t2, -0x7780($gp)
    ctx->pc = 0x283de0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936704), GPR_U32(ctx, 10));
label_283de4:
    // 0x283de4: 0xaf8b8884  sw          $t3, -0x777C($gp)
    ctx->pc = 0x283de4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936708), GPR_U32(ctx, 11));
label_283de8:
    // 0x283de8: 0xaf8c8888  sw          $t4, -0x7778($gp)
    ctx->pc = 0x283de8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936712), GPR_U32(ctx, 12));
label_283dec:
    // 0x283dec: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x283decu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
label_283df0:
    // 0x283df0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x283df0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_283df4:
    // 0x283df4: 0xc78e8058  lwc1        $f14, -0x7FA8($gp)
    ctx->pc = 0x283df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_283df8:
    // 0x283df8: 0x3c01c040  lui         $at, 0xC040
    ctx->pc = 0x283df8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49216 << 16));
label_283dfc:
    // 0x283dfc: 0x44819800  mtc1        $at, $f19
    ctx->pc = 0x283dfcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[19], &bits, sizeof(bits)); }
label_283e00:
    // 0x283e00: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x283e00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
label_283e04:
    // 0x283e04: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x283e04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_283e08:
    // 0x283e08: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x283e08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_283e0c:
    // 0x283e0c: 0x44815800  mtc1        $at, $f11
    ctx->pc = 0x283e0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
label_283e10:
    // 0x283e10: 0x3c0140c0  lui         $at, 0x40C0
    ctx->pc = 0x283e10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16576 << 16));
label_283e14:
    // 0x283e14: 0x44819000  mtc1        $at, $f18
    ctx->pc = 0x283e14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_283e18:
    // 0x283e18: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x283e18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
label_283e1c:
    // 0x283e1c: 0x44818800  mtc1        $at, $f17
    ctx->pc = 0x283e1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[17], &bits, sizeof(bits)); }
label_283e20:
    // 0x283e20: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x283e20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_283e24:
    // 0x283e24: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x283e24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_283e28:
    // 0x283e28: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x283e28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_283e2c:
    // 0x283e2c: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x283e2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_283e30:
    // 0x283e30: 0x3c01c080  lui         $at, 0xC080
    ctx->pc = 0x283e30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49280 << 16));
label_283e34:
    // 0x283e34: 0x44818000  mtc1        $at, $f16
    ctx->pc = 0x283e34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
label_283e38:
    // 0x283e38: 0x448d1000  mtc1        $t5, $f2
    ctx->pc = 0x283e38u;
    { uint32_t bits = GPR_U32(ctx, 13); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_283e3c:
    // 0x283e3c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x283e3cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_283e40:
    // 0x283e40: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x283e40u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
label_283e44:
    // 0x283e44: 0x29a20101  slti        $v0, $t5, 0x101
    ctx->pc = 0x283e44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 13) < (int64_t)(int32_t)257) ? 1 : 0);
label_283e48:
    // 0x283e48: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x283e48u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
label_283e4c:
    // 0x283e4c: 0x46131182  mul.s       $f6, $f2, $f19
    ctx->pc = 0x283e4cu;
    ctx->f[6] = FPU_MUL_S(ctx->f[2], ctx->f[19]);
label_283e50:
    // 0x283e50: 0x460c11c2  mul.s       $f7, $f2, $f12
    ctx->pc = 0x283e50u;
    ctx->f[7] = FPU_MUL_S(ctx->f[2], ctx->f[12]);
label_283e54:
    // 0x283e54: 0x46001207  neg.s       $f8, $f2
    ctx->pc = 0x283e54u;
    ctx->f[8] = FPU_NEG_S(ctx->f[2]);
label_283e58:
    // 0x283e58: 0x460c3000  add.s       $f0, $f6, $f12
    ctx->pc = 0x283e58u;
    ctx->f[0] = FPU_ADD_S(ctx->f[6], ctx->f[12]);
label_283e5c:
    // 0x283e5c: 0x46021242  mul.s       $f9, $f2, $f2
    ctx->pc = 0x283e5cu;
    ctx->f[9] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
label_283e60:
    // 0x283e60: 0x461238c1  sub.s       $f3, $f7, $f18
    ctx->pc = 0x283e60u;
    ctx->f[3] = FPU_SUB_S(ctx->f[7], ctx->f[18]);
label_283e64:
    // 0x283e64: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x283e64u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_283e68:
    // 0x283e68: 0x46024902  mul.s       $f4, $f9, $f2
    ctx->pc = 0x283e68u;
    ctx->f[4] = FPU_MUL_S(ctx->f[9], ctx->f[2]);
label_283e6c:
    // 0x283e6c: 0x460c4040  add.s       $f1, $f8, $f12
    ctx->pc = 0x283e6cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[8], ctx->f[12]);
label_283e70:
    // 0x283e70: 0x460c0000  add.s       $f0, $f0, $f12
    ctx->pc = 0x283e70u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
label_283e74:
    // 0x283e74: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x283e74u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_283e78:
    // 0x283e78: 0x460e2282  mul.s       $f10, $f4, $f14
    ctx->pc = 0x283e78u;
    ctx->f[10] = FPU_MUL_S(ctx->f[4], ctx->f[14]);
label_283e7c:
    // 0x283e7c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x283e7cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_283e80:
    // 0x283e80: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x283e80u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_283e84:
    // 0x283e84: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x283e84u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_283e88:
    // 0x283e88: 0xe5ea0000  swc1        $f10, 0x0($t7)
    ctx->pc = 0x283e88u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 0), bits); }
label_283e8c:
    // 0x283e8c: 0x460b0000  add.s       $f0, $f0, $f11
    ctx->pc = 0x283e8cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[11]);
label_283e90:
    // 0x283e90: 0x25ef0004  addiu       $t7, $t7, 0x4
    ctx->pc = 0x283e90u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4));
label_283e94:
    // 0x283e94: 0x460c0841  sub.s       $f1, $f1, $f12
    ctx->pc = 0x283e94u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[12]);
label_283e98:
    // 0x283e98: 0x461118c0  add.s       $f3, $f3, $f17
    ctx->pc = 0x283e98u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[17]);
label_283e9c:
    // 0x283e9c: 0x460e0282  mul.s       $f10, $f0, $f14
    ctx->pc = 0x283e9cu;
    ctx->f[10] = FPU_MUL_S(ctx->f[0], ctx->f[14]);
label_283ea0:
    // 0x283ea0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x283ea0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_283ea4:
    // 0x283ea4: 0x460f3100  add.s       $f4, $f6, $f15
    ctx->pc = 0x283ea4u;
    ctx->f[4] = FPU_ADD_S(ctx->f[6], ctx->f[15]);
label_283ea8:
    // 0x283ea8: 0xe5ca0000  swc1        $f10, 0x0($t6)
    ctx->pc = 0x283ea8u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 0), bits); }
label_283eac:
    // 0x283eac: 0x46103940  add.s       $f5, $f7, $f16
    ctx->pc = 0x283eacu;
    ctx->f[5] = FPU_ADD_S(ctx->f[7], ctx->f[16]);
label_283eb0:
    // 0x283eb0: 0x460e1a82  mul.s       $f10, $f3, $f14
    ctx->pc = 0x283eb0u;
    ctx->f[10] = FPU_MUL_S(ctx->f[3], ctx->f[14]);
label_283eb4:
    // 0x283eb4: 0x25ce0004  addiu       $t6, $t6, 0x4
    ctx->pc = 0x283eb4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4));
label_283eb8:
    // 0x283eb8: 0x460b0840  add.s       $f1, $f1, $f11
    ctx->pc = 0x283eb8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[11]);
label_283ebc:
    // 0x283ebc: 0x46022102  mul.s       $f4, $f4, $f2
    ctx->pc = 0x283ebcu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
label_283ec0:
    // 0x283ec0: 0xe46a0000  swc1        $f10, 0x0($v1)
    ctx->pc = 0x283ec0u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_283ec4:
    // 0x283ec4: 0x460f4000  add.s       $f0, $f8, $f15
    ctx->pc = 0x283ec4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[8], ctx->f[15]);
label_283ec8:
    // 0x283ec8: 0x460e0a82  mul.s       $f10, $f1, $f14
    ctx->pc = 0x283ec8u;
    ctx->f[10] = FPU_MUL_S(ctx->f[1], ctx->f[14]);
label_283ecc:
    // 0x283ecc: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x283eccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_283ed0:
    // 0x283ed0: 0x460b2100  add.s       $f4, $f4, $f11
    ctx->pc = 0x283ed0u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[11]);
label_283ed4:
    // 0x283ed4: 0x46022942  mul.s       $f5, $f5, $f2
    ctx->pc = 0x283ed4u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_283ed8:
    // 0x283ed8: 0xe48a0000  swc1        $f10, 0x0($a0)
    ctx->pc = 0x283ed8u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_283edc:
    // 0x283edc: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x283edcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_283ee0:
    // 0x283ee0: 0x460d4a82  mul.s       $f10, $f9, $f13
    ctx->pc = 0x283ee0u;
    ctx->f[10] = FPU_MUL_S(ctx->f[9], ctx->f[13]);
label_283ee4:
    // 0x283ee4: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x283ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_283ee8:
    // 0x283ee8: 0x460b0001  sub.s       $f0, $f0, $f11
    ctx->pc = 0x283ee8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[11]);
label_283eec:
    // 0x283eec: 0xe4aa0000  swc1        $f10, 0x0($a1)
    ctx->pc = 0x283eecu;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_283ef0:
    // 0x283ef0: 0x460d2282  mul.s       $f10, $f4, $f13
    ctx->pc = 0x283ef0u;
    ctx->f[10] = FPU_MUL_S(ctx->f[4], ctx->f[13]);
label_283ef4:
    // 0x283ef4: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x283ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_283ef8:
    // 0x283ef8: 0xe4ca0000  swc1        $f10, 0x0($a2)
    ctx->pc = 0x283ef8u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_283efc:
    // 0x283efc: 0x460d2a82  mul.s       $f10, $f5, $f13
    ctx->pc = 0x283efcu;
    ctx->f[10] = FPU_MUL_S(ctx->f[5], ctx->f[13]);
label_283f00:
    // 0x283f00: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x283f00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_283f04:
    // 0x283f04: 0xe4ea0000  swc1        $f10, 0x0($a3)
    ctx->pc = 0x283f04u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
label_283f08:
    // 0x283f08: 0x460d0282  mul.s       $f10, $f0, $f13
    ctx->pc = 0x283f08u;
    ctx->f[10] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
label_283f0c:
    // 0x283f0c: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x283f0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_283f10:
    // 0x283f10: 0xe50a0000  swc1        $f10, 0x0($t0)
    ctx->pc = 0x283f10u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
label_283f14:
    // 0x283f14: 0x460b3280  add.s       $f10, $f6, $f11
    ctx->pc = 0x283f14u;
    ctx->f[10] = FPU_ADD_S(ctx->f[6], ctx->f[11]);
label_283f18:
    // 0x283f18: 0xe5220000  swc1        $f2, 0x0($t1)
    ctx->pc = 0x283f18u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
label_283f1c:
    // 0x283f1c: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x283f1cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
label_283f20:
    // 0x283f20: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x283f20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
label_283f24:
    // 0x283f24: 0xe54a0000  swc1        $f10, 0x0($t2)
    ctx->pc = 0x283f24u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 0), bits); }
label_283f28:
    // 0x283f28: 0x460f3a81  sub.s       $f10, $f7, $f15
    ctx->pc = 0x283f28u;
    ctx->f[10] = FPU_SUB_S(ctx->f[7], ctx->f[15]);
label_283f2c:
    // 0x283f2c: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x283f2cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
label_283f30:
    // 0x283f30: 0xe56a0000  swc1        $f10, 0x0($t3)
    ctx->pc = 0x283f30u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 0), bits); }
label_283f34:
    // 0x283f34: 0x460b4280  add.s       $f10, $f8, $f11
    ctx->pc = 0x283f34u;
    ctx->f[10] = FPU_ADD_S(ctx->f[8], ctx->f[11]);
label_283f38:
    // 0x283f38: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x283f38u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
label_283f3c:
    // 0x283f3c: 0xe58a0000  swc1        $f10, 0x0($t4)
    ctx->pc = 0x283f3cu;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 0), bits); }
label_283f40:
    // 0x283f40: 0x1440ffbd  bnez        $v0, . + 4 + (-0x43 << 2)
label_283f44:
    if (ctx->pc == 0x283F44u) {
        ctx->pc = 0x283F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283F40u;
        // 0x283f44: 0x258c0004  addiu       $t4, $t4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x283F48u;
        goto label_283f48;
    }
    ctx->pc = 0x283F40u;
    {
        const bool branch_taken_0x283f40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x283F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283F40u;
        // 0x283f44: 0x258c0004  addiu       $t4, $t4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283f40) {
            ctx->pc = 0x283E38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_283e38;
        }
    }
    ctx->pc = 0x283F48u;
label_283f48:
    // 0x283f48: 0x1000000b  b           . + 4 + (0xB << 2)
label_283f4c:
    if (ctx->pc == 0x283F4Cu) {
        ctx->pc = 0x283F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283F48u;
        // 0x283f4c: 0x8f82885c  lw          $v0, -0x77A4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936668)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x283F50u;
        goto label_283f50;
    }
    ctx->pc = 0x283F48u;
    {
        const bool branch_taken_0x283f48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283F48u;
        // 0x283f4c: 0x8f82885c  lw          $v0, -0x77A4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936668)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283f48) {
            ctx->pc = 0x283F78u;
            goto label_283f78;
        }
    }
    ctx->pc = 0x283F50u;
label_283f50:
    // 0x283f50: 0x24020102  addiu       $v0, $zero, 0x102
    ctx->pc = 0x283f50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
label_283f54:
    // 0x283f54: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x283f54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_283f58:
    // 0x283f58: 0x34840013  ori         $a0, $a0, 0x13
    ctx->pc = 0x283f58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
label_283f5c:
    // 0x283f5c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x283f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_283f60:
    // 0x283f60: 0xc092848  jal         func_24A120
label_283f64:
    if (ctx->pc == 0x283F64u) {
        ctx->pc = 0x283F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283F60u;
        // 0x283f64: 0x24053030  addiu       $a1, $zero, 0x3030 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x283F68u;
        goto label_283f68;
    }
    ctx->pc = 0x283F60u;
    SET_GPR_U32(ctx, 31, 0x283F68u);
    ctx->pc = 0x283F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x283F60u;
    // 0x283f64: 0x24053030  addiu       $a1, $zero, 0x3030 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x283F60u, 0x283F68u)) {
        return;
    }
    ctx->pc = 0x283F68u;
label_283f68:
    // 0x283f68: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x283f68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_283f6c:
    // 0x283f6c: 0xc09281a  jal         func_24A068
label_283f70:
    if (ctx->pc == 0x283F70u) {
        ctx->pc = 0x283F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283F6Cu;
        // 0x283f70: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x283F74u;
        goto label_283f74;
    }
    ctx->pc = 0x283F6Cu;
    SET_GPR_U32(ctx, 31, 0x283F74u);
    ctx->pc = 0x283F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x283F6Cu;
    // 0x283f70: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x283F6Cu, 0x283F74u)) {
        return;
    }
    ctx->pc = 0x283F74u;
label_283f74:
    // 0x283f74: 0x8f82885c  lw          $v0, -0x77A4($gp)
    ctx->pc = 0x283f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936668)));
label_283f78:
    // 0x283f78: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x283f78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_283f7c:
    // 0x283f7c: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x283f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_283f80:
    // 0x283f80: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x283f80u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_283f84:
    // 0x283f84: 0x3e00008  jr          $ra
label_283f88:
    if (ctx->pc == 0x283F88u) {
        ctx->pc = 0x283F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283F84u;
        // 0x283f88: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x283F8Cu;
        goto label_283f8c;
    }
    ctx->pc = 0x283F84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x283F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283F84u;
        // 0x283f88: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x283F84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x283F8Cu;
label_283f8c:
    // 0x283f8c: 0x0  nop
    ctx->pc = 0x283f8cu;
    // NOP
    ctx->pc = 0x283f90u;
}
