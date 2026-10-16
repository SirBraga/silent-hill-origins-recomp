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

// Function: sub_00230E78
// Address: 0x230e78 - 0x231288
void sub_00230E78_0x230e78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00230E78_0x230e78");
#endif

    switch (ctx->pc) {
        case 0x230e78u: goto label_230e78;
        case 0x230e7cu: goto label_230e7c;
        case 0x230e80u: goto label_230e80;
        case 0x230e84u: goto label_230e84;
        case 0x230e88u: goto label_230e88;
        case 0x230e8cu: goto label_230e8c;
        case 0x230e90u: goto label_230e90;
        case 0x230e94u: goto label_230e94;
        case 0x230e98u: goto label_230e98;
        case 0x230e9cu: goto label_230e9c;
        case 0x230ea0u: goto label_230ea0;
        case 0x230ea4u: goto label_230ea4;
        case 0x230ea8u: goto label_230ea8;
        case 0x230eacu: goto label_230eac;
        case 0x230eb0u: goto label_230eb0;
        case 0x230eb4u: goto label_230eb4;
        case 0x230eb8u: goto label_230eb8;
        case 0x230ebcu: goto label_230ebc;
        case 0x230ec0u: goto label_230ec0;
        case 0x230ec4u: goto label_230ec4;
        case 0x230ec8u: goto label_230ec8;
        case 0x230eccu: goto label_230ecc;
        case 0x230ed0u: goto label_230ed0;
        case 0x230ed4u: goto label_230ed4;
        case 0x230ed8u: goto label_230ed8;
        case 0x230edcu: goto label_230edc;
        case 0x230ee0u: goto label_230ee0;
        case 0x230ee4u: goto label_230ee4;
        case 0x230ee8u: goto label_230ee8;
        case 0x230eecu: goto label_230eec;
        case 0x230ef0u: goto label_230ef0;
        case 0x230ef4u: goto label_230ef4;
        case 0x230ef8u: goto label_230ef8;
        case 0x230efcu: goto label_230efc;
        case 0x230f00u: goto label_230f00;
        case 0x230f04u: goto label_230f04;
        case 0x230f08u: goto label_230f08;
        case 0x230f0cu: goto label_230f0c;
        case 0x230f10u: goto label_230f10;
        case 0x230f14u: goto label_230f14;
        case 0x230f18u: goto label_230f18;
        case 0x230f1cu: goto label_230f1c;
        case 0x230f20u: goto label_230f20;
        case 0x230f24u: goto label_230f24;
        case 0x230f28u: goto label_230f28;
        case 0x230f2cu: goto label_230f2c;
        case 0x230f30u: goto label_230f30;
        case 0x230f34u: goto label_230f34;
        case 0x230f38u: goto label_230f38;
        case 0x230f3cu: goto label_230f3c;
        case 0x230f40u: goto label_230f40;
        case 0x230f44u: goto label_230f44;
        case 0x230f48u: goto label_230f48;
        case 0x230f4cu: goto label_230f4c;
        case 0x230f50u: goto label_230f50;
        case 0x230f54u: goto label_230f54;
        case 0x230f58u: goto label_230f58;
        case 0x230f5cu: goto label_230f5c;
        case 0x230f60u: goto label_230f60;
        case 0x230f64u: goto label_230f64;
        case 0x230f68u: goto label_230f68;
        case 0x230f6cu: goto label_230f6c;
        case 0x230f70u: goto label_230f70;
        case 0x230f74u: goto label_230f74;
        case 0x230f78u: goto label_230f78;
        case 0x230f7cu: goto label_230f7c;
        case 0x230f80u: goto label_230f80;
        case 0x230f84u: goto label_230f84;
        case 0x230f88u: goto label_230f88;
        case 0x230f8cu: goto label_230f8c;
        case 0x230f90u: goto label_230f90;
        case 0x230f94u: goto label_230f94;
        case 0x230f98u: goto label_230f98;
        case 0x230f9cu: goto label_230f9c;
        case 0x230fa0u: goto label_230fa0;
        case 0x230fa4u: goto label_230fa4;
        case 0x230fa8u: goto label_230fa8;
        case 0x230facu: goto label_230fac;
        case 0x230fb0u: goto label_230fb0;
        case 0x230fb4u: goto label_230fb4;
        case 0x230fb8u: goto label_230fb8;
        case 0x230fbcu: goto label_230fbc;
        case 0x230fc0u: goto label_230fc0;
        case 0x230fc4u: goto label_230fc4;
        case 0x230fc8u: goto label_230fc8;
        case 0x230fccu: goto label_230fcc;
        case 0x230fd0u: goto label_230fd0;
        case 0x230fd4u: goto label_230fd4;
        case 0x230fd8u: goto label_230fd8;
        case 0x230fdcu: goto label_230fdc;
        case 0x230fe0u: goto label_230fe0;
        case 0x230fe4u: goto label_230fe4;
        case 0x230fe8u: goto label_230fe8;
        case 0x230fecu: goto label_230fec;
        case 0x230ff0u: goto label_230ff0;
        case 0x230ff4u: goto label_230ff4;
        case 0x230ff8u: goto label_230ff8;
        case 0x230ffcu: goto label_230ffc;
        case 0x231000u: goto label_231000;
        case 0x231004u: goto label_231004;
        case 0x231008u: goto label_231008;
        case 0x23100cu: goto label_23100c;
        case 0x231010u: goto label_231010;
        case 0x231014u: goto label_231014;
        case 0x231018u: goto label_231018;
        case 0x23101cu: goto label_23101c;
        case 0x231020u: goto label_231020;
        case 0x231024u: goto label_231024;
        case 0x231028u: goto label_231028;
        case 0x23102cu: goto label_23102c;
        case 0x231030u: goto label_231030;
        case 0x231034u: goto label_231034;
        case 0x231038u: goto label_231038;
        case 0x23103cu: goto label_23103c;
        case 0x231040u: goto label_231040;
        case 0x231044u: goto label_231044;
        case 0x231048u: goto label_231048;
        case 0x23104cu: goto label_23104c;
        case 0x231050u: goto label_231050;
        case 0x231054u: goto label_231054;
        case 0x231058u: goto label_231058;
        case 0x23105cu: goto label_23105c;
        case 0x231060u: goto label_231060;
        case 0x231064u: goto label_231064;
        case 0x231068u: goto label_231068;
        case 0x23106cu: goto label_23106c;
        case 0x231070u: goto label_231070;
        case 0x231074u: goto label_231074;
        case 0x231078u: goto label_231078;
        case 0x23107cu: goto label_23107c;
        case 0x231080u: goto label_231080;
        case 0x231084u: goto label_231084;
        case 0x231088u: goto label_231088;
        case 0x23108cu: goto label_23108c;
        case 0x231090u: goto label_231090;
        case 0x231094u: goto label_231094;
        case 0x231098u: goto label_231098;
        case 0x23109cu: goto label_23109c;
        case 0x2310a0u: goto label_2310a0;
        case 0x2310a4u: goto label_2310a4;
        case 0x2310a8u: goto label_2310a8;
        case 0x2310acu: goto label_2310ac;
        case 0x2310b0u: goto label_2310b0;
        case 0x2310b4u: goto label_2310b4;
        case 0x2310b8u: goto label_2310b8;
        case 0x2310bcu: goto label_2310bc;
        case 0x2310c0u: goto label_2310c0;
        case 0x2310c4u: goto label_2310c4;
        case 0x2310c8u: goto label_2310c8;
        case 0x2310ccu: goto label_2310cc;
        case 0x2310d0u: goto label_2310d0;
        case 0x2310d4u: goto label_2310d4;
        case 0x2310d8u: goto label_2310d8;
        case 0x2310dcu: goto label_2310dc;
        case 0x2310e0u: goto label_2310e0;
        case 0x2310e4u: goto label_2310e4;
        case 0x2310e8u: goto label_2310e8;
        case 0x2310ecu: goto label_2310ec;
        case 0x2310f0u: goto label_2310f0;
        case 0x2310f4u: goto label_2310f4;
        case 0x2310f8u: goto label_2310f8;
        case 0x2310fcu: goto label_2310fc;
        case 0x231100u: goto label_231100;
        case 0x231104u: goto label_231104;
        case 0x231108u: goto label_231108;
        case 0x23110cu: goto label_23110c;
        case 0x231110u: goto label_231110;
        case 0x231114u: goto label_231114;
        case 0x231118u: goto label_231118;
        case 0x23111cu: goto label_23111c;
        case 0x231120u: goto label_231120;
        case 0x231124u: goto label_231124;
        case 0x231128u: goto label_231128;
        case 0x23112cu: goto label_23112c;
        case 0x231130u: goto label_231130;
        case 0x231134u: goto label_231134;
        case 0x231138u: goto label_231138;
        case 0x23113cu: goto label_23113c;
        case 0x231140u: goto label_231140;
        case 0x231144u: goto label_231144;
        case 0x231148u: goto label_231148;
        case 0x23114cu: goto label_23114c;
        case 0x231150u: goto label_231150;
        case 0x231154u: goto label_231154;
        case 0x231158u: goto label_231158;
        case 0x23115cu: goto label_23115c;
        case 0x231160u: goto label_231160;
        case 0x231164u: goto label_231164;
        case 0x231168u: goto label_231168;
        case 0x23116cu: goto label_23116c;
        case 0x231170u: goto label_231170;
        case 0x231174u: goto label_231174;
        case 0x231178u: goto label_231178;
        case 0x23117cu: goto label_23117c;
        case 0x231180u: goto label_231180;
        case 0x231184u: goto label_231184;
        case 0x231188u: goto label_231188;
        case 0x23118cu: goto label_23118c;
        case 0x231190u: goto label_231190;
        case 0x231194u: goto label_231194;
        case 0x231198u: goto label_231198;
        case 0x23119cu: goto label_23119c;
        case 0x2311a0u: goto label_2311a0;
        case 0x2311a4u: goto label_2311a4;
        case 0x2311a8u: goto label_2311a8;
        case 0x2311acu: goto label_2311ac;
        case 0x2311b0u: goto label_2311b0;
        case 0x2311b4u: goto label_2311b4;
        case 0x2311b8u: goto label_2311b8;
        case 0x2311bcu: goto label_2311bc;
        case 0x2311c0u: goto label_2311c0;
        case 0x2311c4u: goto label_2311c4;
        case 0x2311c8u: goto label_2311c8;
        case 0x2311ccu: goto label_2311cc;
        case 0x2311d0u: goto label_2311d0;
        case 0x2311d4u: goto label_2311d4;
        case 0x2311d8u: goto label_2311d8;
        case 0x2311dcu: goto label_2311dc;
        case 0x2311e0u: goto label_2311e0;
        case 0x2311e4u: goto label_2311e4;
        case 0x2311e8u: goto label_2311e8;
        case 0x2311ecu: goto label_2311ec;
        case 0x2311f0u: goto label_2311f0;
        case 0x2311f4u: goto label_2311f4;
        case 0x2311f8u: goto label_2311f8;
        case 0x2311fcu: goto label_2311fc;
        case 0x231200u: goto label_231200;
        case 0x231204u: goto label_231204;
        case 0x231208u: goto label_231208;
        case 0x23120cu: goto label_23120c;
        case 0x231210u: goto label_231210;
        case 0x231214u: goto label_231214;
        case 0x231218u: goto label_231218;
        case 0x23121cu: goto label_23121c;
        case 0x231220u: goto label_231220;
        case 0x231224u: goto label_231224;
        case 0x231228u: goto label_231228;
        case 0x23122cu: goto label_23122c;
        case 0x231230u: goto label_231230;
        case 0x231234u: goto label_231234;
        case 0x231238u: goto label_231238;
        case 0x23123cu: goto label_23123c;
        case 0x231240u: goto label_231240;
        case 0x231244u: goto label_231244;
        case 0x231248u: goto label_231248;
        case 0x23124cu: goto label_23124c;
        case 0x231250u: goto label_231250;
        case 0x231254u: goto label_231254;
        case 0x231258u: goto label_231258;
        case 0x23125cu: goto label_23125c;
        case 0x231260u: goto label_231260;
        case 0x231264u: goto label_231264;
        case 0x231268u: goto label_231268;
        case 0x23126cu: goto label_23126c;
        case 0x231270u: goto label_231270;
        case 0x231274u: goto label_231274;
        case 0x231278u: goto label_231278;
        case 0x23127cu: goto label_23127c;
        case 0x231280u: goto label_231280;
        case 0x231284u: goto label_231284;
        default: break;
    }

    ctx->pc = 0x230e78u;

label_230e78:
    // 0x230e78: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x230e78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_230e7c:
    // 0x230e7c: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x230e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_230e80:
    // 0x230e80: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x230e80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_230e84:
    // 0x230e84: 0x2c62001e  sltiu       $v0, $v1, 0x1E
    ctx->pc = 0x230e84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)30) ? 1 : 0);
label_230e88:
    // 0x230e88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x230e88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_230e8c:
    // 0x230e8c: 0x104000fe  beqz        $v0, . + 4 + (0xFE << 2)
label_230e90:
    if (ctx->pc == 0x230E90u) {
        ctx->pc = 0x230E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230E8Cu;
        // 0x230e90: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230E94u;
        goto label_230e94;
    }
    ctx->pc = 0x230E8Cu;
    {
        const bool branch_taken_0x230e8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x230E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230E8Cu;
        // 0x230e90: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230e8c) {
            ctx->pc = 0x231288u;
            return;
        }
    }
    ctx->pc = 0x230E94u;
label_230e94:
    // 0x230e94: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x230e94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_230e98:
    // 0x230e98: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x230e98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_230e9c:
    // 0x230e9c: 0x2442a900  addiu       $v0, $v0, -0x5700
    ctx->pc = 0x230e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945024));
label_230ea0:
    // 0x230ea0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x230ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_230ea4:
    // 0x230ea4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x230ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_230ea8:
    // 0x230ea8: 0x800008  jr          $a0
label_230eac:
    if (ctx->pc == 0x230EACu) {
        ctx->pc = 0x230EB0u;
        goto label_230eb0;
    }
    ctx->pc = 0x230EA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x230EB0u: goto label_230eb0;
            case 0x230EC8u: goto label_230ec8;
            case 0x230EECu: goto label_230eec;
            case 0x230F04u: goto label_230f04;
            case 0x230F1Cu: goto label_230f1c;
            case 0x230F34u: goto label_230f34;
            case 0x230F54u: goto label_230f54;
            case 0x230F70u: goto label_230f70;
            case 0x230F88u: goto label_230f88;
            case 0x230FF0u: goto label_230ff0;
            case 0x23107Cu: goto label_23107c;
            case 0x231108u: goto label_231108;
            case 0x231118u: goto label_231118;
            case 0x231130u: goto label_231130;
            case 0x23116Cu: goto label_23116c;
            case 0x2311A4u: goto label_2311a4;
            case 0x2311B4u: goto label_2311b4;
            case 0x231254u: goto label_231254;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x230EA8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x230EB0u;
label_230eb0:
    // 0x230eb0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x230eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_230eb4:
    // 0x230eb4: 0x8c424138  lw          $v0, 0x4138($v0)
    ctx->pc = 0x230eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16696)));
label_230eb8:
    // 0x230eb8: 0x21827  nor         $v1, $zero, $v0
    ctx->pc = 0x230eb8u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_230ebc:
    // 0x230ebc: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x230ebcu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0));
label_230ec0:
    // 0x230ec0: 0x100000f3  b           . + 4 + (0xF3 << 2)
label_230ec4:
    if (ctx->pc == 0x230EC4u) {
        ctx->pc = 0x230EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230EC0u;
        // 0x230ec4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230EC8u;
        goto label_230ec8;
    }
    ctx->pc = 0x230EC0u;
    {
        const bool branch_taken_0x230ec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230EC0u;
        // 0x230ec4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230ec0) {
            ctx->pc = 0x231290u;
            return;
        }
    }
    ctx->pc = 0x230EC8u;
label_230ec8:
    // 0x230ec8: 0xdf828480  ld          $v0, -0x7B80($gp)
    ctx->pc = 0x230ec8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294935680)));
label_230ecc:
    // 0x230ecc: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x230eccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_230ed0:
    // 0x230ed0: 0x3042000c  andi        $v0, $v0, 0xC
    ctx->pc = 0x230ed0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)12);
label_230ed4:
    // 0x230ed4: 0x546200ee  bnel        $v1, $v0, . + 4 + (0xEE << 2)
label_230ed8:
    if (ctx->pc == 0x230ED8u) {
        ctx->pc = 0x230ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230ED4u;
        // 0x230ed8: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230EDCu;
        goto label_230edc;
    }
    ctx->pc = 0x230ED4u;
    {
        const bool branch_taken_0x230ed4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x230ed4) {
            ctx->pc = 0x230ED8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x230ED4u;
            // 0x230ed8: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x231290u;
            return;
        }
    }
    ctx->pc = 0x230EDCu;
label_230edc:
    // 0x230edc: 0x146000d2  bnez        $v1, . + 4 + (0xD2 << 2)
label_230ee0:
    if (ctx->pc == 0x230EE0u) {
        ctx->pc = 0x230EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230EDCu;
        // 0x230ee0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230EE4u;
        goto label_230ee4;
    }
    ctx->pc = 0x230EDCu;
    {
        const bool branch_taken_0x230edc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x230EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230EDCu;
        // 0x230ee0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230edc) {
            ctx->pc = 0x231228u;
            goto label_231228;
        }
    }
    ctx->pc = 0x230EE4u;
label_230ee4:
    // 0x230ee4: 0x100000c4  b           . + 4 + (0xC4 << 2)
label_230ee8:
    if (ctx->pc == 0x230EE8u) {
        ctx->pc = 0x230EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230EE4u;
        // 0x230ee8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230EECu;
        goto label_230eec;
    }
    ctx->pc = 0x230EE4u;
    {
        const bool branch_taken_0x230ee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230EE4u;
        // 0x230ee8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230ee4) {
            ctx->pc = 0x2311F8u;
            goto label_2311f8;
        }
    }
    ctx->pc = 0x230EECu;
label_230eec:
    // 0x230eec: 0xdf828480  ld          $v0, -0x7B80($gp)
    ctx->pc = 0x230eecu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294935680)));
label_230ef0:
    // 0x230ef0: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x230ef0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_230ef4:
    // 0x230ef4: 0x144000cc  bnez        $v0, . + 4 + (0xCC << 2)
label_230ef8:
    if (ctx->pc == 0x230EF8u) {
        ctx->pc = 0x230EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230EF4u;
        // 0x230ef8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230EFCu;
        goto label_230efc;
    }
    ctx->pc = 0x230EF4u;
    {
        const bool branch_taken_0x230ef4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x230EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230EF4u;
        // 0x230ef8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230ef4) {
            ctx->pc = 0x231228u;
            goto label_231228;
        }
    }
    ctx->pc = 0x230EFCu;
label_230efc:
    // 0x230efc: 0x100000be  b           . + 4 + (0xBE << 2)
label_230f00:
    if (ctx->pc == 0x230F00u) {
        ctx->pc = 0x230F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230EFCu;
        // 0x230f00: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230F04u;
        goto label_230f04;
    }
    ctx->pc = 0x230EFCu;
    {
        const bool branch_taken_0x230efc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230EFCu;
        // 0x230f00: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230efc) {
            ctx->pc = 0x2311F8u;
            goto label_2311f8;
        }
    }
    ctx->pc = 0x230F04u;
label_230f04:
    // 0x230f04: 0xdf828480  ld          $v0, -0x7B80($gp)
    ctx->pc = 0x230f04u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294935680)));
label_230f08:
    // 0x230f08: 0x3042000c  andi        $v0, $v0, 0xC
    ctx->pc = 0x230f08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)12);
label_230f0c:
    // 0x230f0c: 0x144000c6  bnez        $v0, . + 4 + (0xC6 << 2)
label_230f10:
    if (ctx->pc == 0x230F10u) {
        ctx->pc = 0x230F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230F0Cu;
        // 0x230f10: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230F14u;
        goto label_230f14;
    }
    ctx->pc = 0x230F0Cu;
    {
        const bool branch_taken_0x230f0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x230F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230F0Cu;
        // 0x230f10: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230f0c) {
            ctx->pc = 0x231228u;
            goto label_231228;
        }
    }
    ctx->pc = 0x230F14u;
label_230f14:
    // 0x230f14: 0x100000b8  b           . + 4 + (0xB8 << 2)
label_230f18:
    if (ctx->pc == 0x230F18u) {
        ctx->pc = 0x230F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230F14u;
        // 0x230f18: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230F1Cu;
        goto label_230f1c;
    }
    ctx->pc = 0x230F14u;
    {
        const bool branch_taken_0x230f14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230F14u;
        // 0x230f18: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230f14) {
            ctx->pc = 0x2311F8u;
            goto label_2311f8;
        }
    }
    ctx->pc = 0x230F1Cu;
label_230f1c:
    // 0x230f1c: 0xdf8284a0  ld          $v0, -0x7B60($gp)
    ctx->pc = 0x230f1cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294935712)));
label_230f20:
    // 0x230f20: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x230f20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
label_230f24:
    // 0x230f24: 0x104000b4  beqz        $v0, . + 4 + (0xB4 << 2)
label_230f28:
    if (ctx->pc == 0x230F28u) {
        ctx->pc = 0x230F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230F24u;
        // 0x230f28: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230F2Cu;
        goto label_230f2c;
    }
    ctx->pc = 0x230F24u;
    {
        const bool branch_taken_0x230f24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x230F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230F24u;
        // 0x230f28: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230f24) {
            ctx->pc = 0x2311F8u;
            goto label_2311f8;
        }
    }
    ctx->pc = 0x230F2Cu;
label_230f2c:
    // 0x230f2c: 0x100000d8  b           . + 4 + (0xD8 << 2)
label_230f30:
    if (ctx->pc == 0x230F30u) {
        ctx->pc = 0x230F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230F2Cu;
        // 0x230f30: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230F34u;
        goto label_230f34;
    }
    ctx->pc = 0x230F2Cu;
    {
        const bool branch_taken_0x230f2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230F2Cu;
        // 0x230f30: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230f2c) {
            ctx->pc = 0x231290u;
            return;
        }
    }
    ctx->pc = 0x230F34u;
label_230f34:
    // 0x230f34: 0xdf828460  ld          $v0, -0x7BA0($gp)
    ctx->pc = 0x230f34u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294935648)));
label_230f38:
    // 0x230f38: 0x3c030006  lui         $v1, 0x6
    ctx->pc = 0x230f38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)6 << 16));
label_230f3c:
    // 0x230f3c: 0x3c040004  lui         $a0, 0x4
    ctx->pc = 0x230f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4 << 16));
label_230f40:
    // 0x230f40: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x230f40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_230f44:
    // 0x230f44: 0x441026  xor         $v0, $v0, $a0
    ctx->pc = 0x230f44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 4));
label_230f48:
    // 0x230f48: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x230f48u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_230f4c:
    // 0x230f4c: 0x100000d0  b           . + 4 + (0xD0 << 2)
label_230f50:
    if (ctx->pc == 0x230F50u) {
        ctx->pc = 0x230F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230F4Cu;
        // 0x230f50: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230F54u;
        goto label_230f54;
    }
    ctx->pc = 0x230F4Cu;
    {
        const bool branch_taken_0x230f4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230F4Cu;
        // 0x230f50: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230f4c) {
            ctx->pc = 0x231290u;
            return;
        }
    }
    ctx->pc = 0x230F54u;
label_230f54:
    // 0x230f54: 0xdf8284a0  ld          $v0, -0x7B60($gp)
    ctx->pc = 0x230f54u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294935712)));
label_230f58:
    // 0x230f58: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x230f58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_230f5c:
    // 0x230f5c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x230f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_230f60:
    // 0x230f60: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x230f60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_230f64:
    // 0x230f64: 0x82180b  movn        $v1, $a0, $v0
    ctx->pc = 0x230f64u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4));
label_230f68:
    // 0x230f68: 0x100000c9  b           . + 4 + (0xC9 << 2)
label_230f6c:
    if (ctx->pc == 0x230F6Cu) {
        ctx->pc = 0x230F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230F68u;
        // 0x230f6c: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230F70u;
        goto label_230f70;
    }
    ctx->pc = 0x230F68u;
    {
        const bool branch_taken_0x230f68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230F68u;
        // 0x230f6c: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230f68) {
            ctx->pc = 0x231290u;
            return;
        }
    }
    ctx->pc = 0x230F70u;
label_230f70:
    // 0x230f70: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x230f70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_230f74:
    // 0x230f74: 0x9c4234c4  lwu         $v0, 0x34C4($v0)
    ctx->pc = 0x230f74u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 13508)));
label_230f78:
    // 0x230f78: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x230f78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_230f7c:
    // 0x230f7c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x230f7cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_230f80:
    // 0x230f80: 0x10000068  b           . + 4 + (0x68 << 2)
label_230f84:
    if (ctx->pc == 0x230F84u) {
        ctx->pc = 0x230F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230F80u;
        // 0x230f84: 0x38420001  xori        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x230F88u;
        goto label_230f88;
    }
    ctx->pc = 0x230F80u;
    {
        const bool branch_taken_0x230f80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230F80u;
        // 0x230f84: 0x38420001  xori        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x230f80) {
            ctx->pc = 0x231124u;
            goto label_231124;
        }
    }
    ctx->pc = 0x230F88u;
label_230f88:
    // 0x230f88: 0xdf828488  ld          $v0, -0x7B78($gp)
    ctx->pc = 0x230f88u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294935688)));
label_230f8c:
    // 0x230f8c: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x230f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_230f90:
    // 0x230f90: 0x304401e0  andi        $a0, $v0, 0x1E0
    ctx->pc = 0x230f90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)480);
label_230f94:
    // 0x230f94: 0x108300a3  beq         $a0, $v1, . + 4 + (0xA3 << 2)
label_230f98:
    if (ctx->pc == 0x230F98u) {
        ctx->pc = 0x230F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230F94u;
        // 0x230f98: 0x28820081  slti        $v0, $a0, 0x81 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)129) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x230F9Cu;
        goto label_230f9c;
    }
    ctx->pc = 0x230F94u;
    {
        const bool branch_taken_0x230f94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x230F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230F94u;
        // 0x230f98: 0x28820081  slti        $v0, $a0, 0x81 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)129) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x230f94) {
            ctx->pc = 0x231224u;
            goto label_231224;
        }
    }
    ctx->pc = 0x230F9Cu;
label_230f9c:
    // 0x230f9c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_230fa0:
    if (ctx->pc == 0x230FA0u) {
        ctx->pc = 0x230FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230F9Cu;
        // 0x230fa0: 0x24020120  addiu       $v0, $zero, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230FA4u;
        goto label_230fa4;
    }
    ctx->pc = 0x230F9Cu;
    {
        const bool branch_taken_0x230f9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x230FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230F9Cu;
        // 0x230fa0: 0x24020120  addiu       $v0, $zero, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230f9c) {
            ctx->pc = 0x230FBCu;
            goto label_230fbc;
        }
    }
    ctx->pc = 0x230FA4u;
label_230fa4:
    // 0x230fa4: 0x10800093  beqz        $a0, . + 4 + (0x93 << 2)
label_230fa8:
    if (ctx->pc == 0x230FA8u) {
        ctx->pc = 0x230FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230FA4u;
        // 0x230fa8: 0x24020060  addiu       $v0, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230FACu;
        goto label_230fac;
    }
    ctx->pc = 0x230FA4u;
    {
        const bool branch_taken_0x230fa4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x230FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230FA4u;
        // 0x230fa8: 0x24020060  addiu       $v0, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230fa4) {
            ctx->pc = 0x2311F4u;
            goto label_2311f4;
        }
    }
    ctx->pc = 0x230FACu;
label_230fac:
    // 0x230fac: 0x10820097  beq         $a0, $v0, . + 4 + (0x97 << 2)
label_230fb0:
    if (ctx->pc == 0x230FB0u) {
        ctx->pc = 0x230FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230FACu;
        // 0x230fb0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230FB4u;
        goto label_230fb4;
    }
    ctx->pc = 0x230FACu;
    {
        const bool branch_taken_0x230fac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x230FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230FACu;
        // 0x230fb0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230fac) {
            ctx->pc = 0x23120Cu;
            goto label_23120c;
        }
    }
    ctx->pc = 0x230FB4u;
label_230fb4:
    // 0x230fb4: 0x100000b8  b           . + 4 + (0xB8 << 2)
label_230fb8:
    if (ctx->pc == 0x230FB8u) {
        ctx->pc = 0x230FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230FB4u;
        // 0x230fb8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230FBCu;
        goto label_230fbc;
    }
    ctx->pc = 0x230FB4u;
    {
        const bool branch_taken_0x230fb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230FB4u;
        // 0x230fb8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230fb4) {
            ctx->pc = 0x231298u;
            return;
        }
    }
    ctx->pc = 0x230FBCu;
label_230fbc:
    // 0x230fbc: 0x10820096  beq         $a0, $v0, . + 4 + (0x96 << 2)
label_230fc0:
    if (ctx->pc == 0x230FC0u) {
        ctx->pc = 0x230FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230FBCu;
        // 0x230fc0: 0x28820121  slti        $v0, $a0, 0x121 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)289) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x230FC4u;
        goto label_230fc4;
    }
    ctx->pc = 0x230FBCu;
    {
        const bool branch_taken_0x230fbc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x230FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230FBCu;
        // 0x230fc0: 0x28820121  slti        $v0, $a0, 0x121 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)289) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x230fbc) {
            ctx->pc = 0x231218u;
            goto label_231218;
        }
    }
    ctx->pc = 0x230FC4u;
label_230fc4:
    // 0x230fc4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_230fc8:
    if (ctx->pc == 0x230FC8u) {
        ctx->pc = 0x230FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230FC4u;
        // 0x230fc8: 0x240200c0  addiu       $v0, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230FCCu;
        goto label_230fcc;
    }
    ctx->pc = 0x230FC4u;
    {
        const bool branch_taken_0x230fc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x230FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230FC4u;
        // 0x230fc8: 0x240200c0  addiu       $v0, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230fc4) {
            ctx->pc = 0x230FDCu;
            goto label_230fdc;
        }
    }
    ctx->pc = 0x230FCCu;
label_230fcc:
    // 0x230fcc: 0x1082009b  beq         $a0, $v0, . + 4 + (0x9B << 2)
label_230fd0:
    if (ctx->pc == 0x230FD0u) {
        ctx->pc = 0x230FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230FCCu;
        // 0x230fd0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230FD4u;
        goto label_230fd4;
    }
    ctx->pc = 0x230FCCu;
    {
        const bool branch_taken_0x230fcc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x230FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230FCCu;
        // 0x230fd0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230fcc) {
            ctx->pc = 0x23123Cu;
            goto label_23123c;
        }
    }
    ctx->pc = 0x230FD4u;
label_230fd4:
    // 0x230fd4: 0x100000b0  b           . + 4 + (0xB0 << 2)
label_230fd8:
    if (ctx->pc == 0x230FD8u) {
        ctx->pc = 0x230FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230FD4u;
        // 0x230fd8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230FDCu;
        goto label_230fdc;
    }
    ctx->pc = 0x230FD4u;
    {
        const bool branch_taken_0x230fd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230FD4u;
        // 0x230fd8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230fd4) {
            ctx->pc = 0x231298u;
            return;
        }
    }
    ctx->pc = 0x230FDCu;
label_230fdc:
    // 0x230fdc: 0x24020160  addiu       $v0, $zero, 0x160
    ctx->pc = 0x230fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
label_230fe0:
    // 0x230fe0: 0x10820099  beq         $a0, $v0, . + 4 + (0x99 << 2)
label_230fe4:
    if (ctx->pc == 0x230FE4u) {
        ctx->pc = 0x230FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230FE0u;
        // 0x230fe4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230FE8u;
        goto label_230fe8;
    }
    ctx->pc = 0x230FE0u;
    {
        const bool branch_taken_0x230fe0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x230FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230FE0u;
        // 0x230fe4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230fe0) {
            ctx->pc = 0x231248u;
            goto label_231248;
        }
    }
    ctx->pc = 0x230FE8u;
label_230fe8:
    // 0x230fe8: 0x100000ab  b           . + 4 + (0xAB << 2)
label_230fec:
    if (ctx->pc == 0x230FECu) {
        ctx->pc = 0x230FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230FE8u;
        // 0x230fec: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230FF0u;
        goto label_230ff0;
    }
    ctx->pc = 0x230FE8u;
    {
        const bool branch_taken_0x230fe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230FE8u;
        // 0x230fec: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230fe8) {
            ctx->pc = 0x231298u;
            return;
        }
    }
    ctx->pc = 0x230FF0u;
label_230ff0:
    // 0x230ff0: 0xdf878490  ld          $a3, -0x7B70($gp)
    ctx->pc = 0x230ff0u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 28), 4294935696)));
label_230ff4:
    // 0x230ff4: 0x4e000a4  bltz        $a3, . + 4 + (0xA4 << 2)
label_230ff8:
    if (ctx->pc == 0x230FF8u) {
        ctx->pc = 0x230FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230FF4u;
        // 0x230ff8: 0x8f8884ac  lw          $t0, -0x7B54($gp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935724)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x230FFCu;
        goto label_230ffc;
    }
    ctx->pc = 0x230FF4u;
    {
        const bool branch_taken_0x230ff4 = (GPR_S64(ctx, 7) < 0);
        ctx->pc = 0x230FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230FF4u;
        // 0x230ff8: 0x8f8884ac  lw          $t0, -0x7B54($gp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935724)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230ff4) {
            ctx->pc = 0x231288u;
            return;
        }
    }
    ctx->pc = 0x230FFCu;
label_230ffc:
    // 0x230ffc: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x230ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_231000:
    // 0x231000: 0x8f8284a8  lw          $v0, -0x7B58($gp)
    ctx->pc = 0x231000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935720)));
label_231004:
    // 0x231004: 0x3c03005c  lui         $v1, 0x5C
    ctx->pc = 0x231004u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
label_231008:
    // 0x231008: 0x1042018  mult        $a0, $t0, $a0
    ctx->pc = 0x231008u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_23100c:
    // 0x23100c: 0x24630ce8  addiu       $v1, $v1, 0xCE8
    ctx->pc = 0x23100cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3304));
label_231010:
    // 0x231010: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x231010u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_231014:
    // 0x231014: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x231014u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_231018:
    // 0x231018: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x231018u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_23101c:
    // 0x23101c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x23101cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_231020:
    // 0x231020: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x231020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_231024:
    // 0x231024: 0x14c5000a  bne         $a2, $a1, . + 4 + (0xA << 2)
label_231028:
    if (ctx->pc == 0x231028u) {
        ctx->pc = 0x231028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231024u;
        // 0x231028: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23102Cu;
        goto label_23102c;
    }
    ctx->pc = 0x231024u;
    {
        const bool branch_taken_0x231024 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 5));
        ctx->pc = 0x231028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231024u;
        // 0x231028: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231024) {
            ctx->pc = 0x231050u;
            goto label_231050;
        }
    }
    ctx->pc = 0x23102Cu;
label_23102c:
    // 0x23102c: 0x15060008  bne         $t0, $a2, . + 4 + (0x8 << 2)
label_231030:
    if (ctx->pc == 0x231030u) {
        ctx->pc = 0x231034u;
        goto label_231034;
    }
    ctx->pc = 0x23102Cu;
    {
        const bool branch_taken_0x23102c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 6));
        if (branch_taken_0x23102c) {
            ctx->pc = 0x231050u;
            goto label_231050;
        }
    }
    ctx->pc = 0x231034u;
label_231034:
    // 0x231034: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x231034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_231038:
    // 0x231038: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x231038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
label_23103c:
    // 0x23103c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x23103cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_231040:
    // 0x231040: 0x14e20094  bne         $a3, $v0, . + 4 + (0x94 << 2)
label_231044:
    if (ctx->pc == 0x231044u) {
        ctx->pc = 0x231044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231040u;
        // 0x231044: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231048u;
        goto label_231048;
    }
    ctx->pc = 0x231040u;
    {
        const bool branch_taken_0x231040 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x231044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231040u;
        // 0x231044: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231040) {
            ctx->pc = 0x231294u;
            return;
        }
    }
    ctx->pc = 0x231048u;
label_231048:
    // 0x231048: 0x10000004  b           . + 4 + (0x4 << 2)
label_23104c:
    if (ctx->pc == 0x23104Cu) {
        ctx->pc = 0x23104Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231048u;
        // 0x23104c: 0x2cc20006  sltiu       $v0, $a2, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x231050u;
        goto label_231050;
    }
    ctx->pc = 0x231048u;
    {
        const bool branch_taken_0x231048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23104Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231048u;
        // 0x23104c: 0x2cc20006  sltiu       $v0, $a2, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x231048) {
            ctx->pc = 0x23105Cu;
            goto label_23105c;
        }
    }
    ctx->pc = 0x231050u;
label_231050:
    // 0x231050: 0x14e30090  bne         $a3, $v1, . + 4 + (0x90 << 2)
label_231054:
    if (ctx->pc == 0x231054u) {
        ctx->pc = 0x231054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231050u;
        // 0x231054: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231058u;
        goto label_231058;
    }
    ctx->pc = 0x231050u;
    {
        const bool branch_taken_0x231050 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        ctx->pc = 0x231054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231050u;
        // 0x231054: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231050) {
            ctx->pc = 0x231294u;
            return;
        }
    }
    ctx->pc = 0x231058u;
label_231058:
    // 0x231058: 0x2cc20006  sltiu       $v0, $a2, 0x6
    ctx->pc = 0x231058u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_23105c:
    // 0x23105c: 0x1040008a  beqz        $v0, . + 4 + (0x8A << 2)
label_231060:
    if (ctx->pc == 0x231060u) {
        ctx->pc = 0x231060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23105Cu;
        // 0x231060: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231064u;
        goto label_231064;
    }
    ctx->pc = 0x23105Cu;
    {
        const bool branch_taken_0x23105c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x231060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23105Cu;
        // 0x231060: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23105c) {
            ctx->pc = 0x231288u;
            return;
        }
    }
    ctx->pc = 0x231064u;
label_231064:
    // 0x231064: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x231064u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_231068:
    // 0x231068: 0x2442a980  addiu       $v0, $v0, -0x5680
    ctx->pc = 0x231068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945152));
label_23106c:
    // 0x23106c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x23106cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_231070:
    // 0x231070: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x231070u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_231074:
    // 0x231074: 0x800008  jr          $a0
label_231078:
    if (ctx->pc == 0x231078u) {
        ctx->pc = 0x23107Cu;
        goto label_23107c;
    }
    ctx->pc = 0x231074u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2311F4u: goto label_2311f4;
            case 0x231200u: goto label_231200;
            case 0x23120Cu: goto label_23120c;
            case 0x231230u: goto label_231230;
            case 0x23123Cu: goto label_23123c;
            case 0x231248u: goto label_231248;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x231074u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x23107Cu;
label_23107c:
    // 0x23107c: 0xdf878490  ld          $a3, -0x7B70($gp)
    ctx->pc = 0x23107cu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 28), 4294935696)));
label_231080:
    // 0x231080: 0x4e00081  bltz        $a3, . + 4 + (0x81 << 2)
label_231084:
    if (ctx->pc == 0x231084u) {
        ctx->pc = 0x231084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231080u;
        // 0x231084: 0x8f8484ac  lw          $a0, -0x7B54($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935724)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231088u;
        goto label_231088;
    }
    ctx->pc = 0x231080u;
    {
        const bool branch_taken_0x231080 = (GPR_S64(ctx, 7) < 0);
        ctx->pc = 0x231084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231080u;
        // 0x231084: 0x8f8484ac  lw          $a0, -0x7B54($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935724)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231080) {
            ctx->pc = 0x231288u;
            return;
        }
    }
    ctx->pc = 0x231088u;
label_231088:
    // 0x231088: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x231088u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_23108c:
    // 0x23108c: 0x8f8684a8  lw          $a2, -0x7B58($gp)
    ctx->pc = 0x23108cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935720)));
label_231090:
    // 0x231090: 0x3c03005c  lui         $v1, 0x5C
    ctx->pc = 0x231090u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
label_231094:
    // 0x231094: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x231094u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_231098:
    // 0x231098: 0x24630ce8  addiu       $v1, $v1, 0xCE8
    ctx->pc = 0x231098u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3304));
label_23109c:
    // 0x23109c: 0x852018  mult        $a0, $a0, $a1
    ctx->pc = 0x23109cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_2310a0:
    // 0x2310a0: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x2310a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_2310a4:
    // 0x2310a4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2310a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2310a8:
    // 0x2310a8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2310a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2310ac:
    // 0x2310ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2310acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2310b0:
    // 0x2310b0: 0x14c5000a  bne         $a2, $a1, . + 4 + (0xA << 2)
label_2310b4:
    if (ctx->pc == 0x2310B4u) {
        ctx->pc = 0x2310B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2310B0u;
        // 0x2310b4: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2310B8u;
        goto label_2310b8;
    }
    ctx->pc = 0x2310B0u;
    {
        const bool branch_taken_0x2310b0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 5));
        ctx->pc = 0x2310B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2310B0u;
        // 0x2310b4: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2310b0) {
            ctx->pc = 0x2310DCu;
            goto label_2310dc;
        }
    }
    ctx->pc = 0x2310B8u;
label_2310b8:
    // 0x2310b8: 0x15060008  bne         $t0, $a2, . + 4 + (0x8 << 2)
label_2310bc:
    if (ctx->pc == 0x2310BCu) {
        ctx->pc = 0x2310C0u;
        goto label_2310c0;
    }
    ctx->pc = 0x2310B8u;
    {
        const bool branch_taken_0x2310b8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 6));
        if (branch_taken_0x2310b8) {
            ctx->pc = 0x2310DCu;
            goto label_2310dc;
        }
    }
    ctx->pc = 0x2310C0u;
label_2310c0:
    // 0x2310c0: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x2310c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_2310c4:
    // 0x2310c4: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x2310c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
label_2310c8:
    // 0x2310c8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x2310c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2310cc:
    // 0x2310cc: 0x14e20071  bne         $a3, $v0, . + 4 + (0x71 << 2)
label_2310d0:
    if (ctx->pc == 0x2310D0u) {
        ctx->pc = 0x2310D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2310CCu;
        // 0x2310d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2310D4u;
        goto label_2310d4;
    }
    ctx->pc = 0x2310CCu;
    {
        const bool branch_taken_0x2310cc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x2310D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2310CCu;
        // 0x2310d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2310cc) {
            ctx->pc = 0x231294u;
            return;
        }
    }
    ctx->pc = 0x2310D4u;
label_2310d4:
    // 0x2310d4: 0x10000004  b           . + 4 + (0x4 << 2)
label_2310d8:
    if (ctx->pc == 0x2310D8u) {
        ctx->pc = 0x2310D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2310D4u;
        // 0x2310d8: 0x2d020006  sltiu       $v0, $t0, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2310DCu;
        goto label_2310dc;
    }
    ctx->pc = 0x2310D4u;
    {
        const bool branch_taken_0x2310d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2310D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2310D4u;
        // 0x2310d8: 0x2d020006  sltiu       $v0, $t0, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2310d4) {
            ctx->pc = 0x2310E8u;
            goto label_2310e8;
        }
    }
    ctx->pc = 0x2310DCu;
label_2310dc:
    // 0x2310dc: 0x14e3006d  bne         $a3, $v1, . + 4 + (0x6D << 2)
label_2310e0:
    if (ctx->pc == 0x2310E0u) {
        ctx->pc = 0x2310E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2310DCu;
        // 0x2310e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2310E4u;
        goto label_2310e4;
    }
    ctx->pc = 0x2310DCu;
    {
        const bool branch_taken_0x2310dc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        ctx->pc = 0x2310E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2310DCu;
        // 0x2310e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2310dc) {
            ctx->pc = 0x231294u;
            return;
        }
    }
    ctx->pc = 0x2310E4u;
label_2310e4:
    // 0x2310e4: 0x2d020006  sltiu       $v0, $t0, 0x6
    ctx->pc = 0x2310e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_2310e8:
    // 0x2310e8: 0x10400067  beqz        $v0, . + 4 + (0x67 << 2)
label_2310ec:
    if (ctx->pc == 0x2310ECu) {
        ctx->pc = 0x2310ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2310E8u;
        // 0x2310ec: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2310F0u;
        goto label_2310f0;
    }
    ctx->pc = 0x2310E8u;
    {
        const bool branch_taken_0x2310e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2310ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2310E8u;
        // 0x2310ec: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2310e8) {
            ctx->pc = 0x231288u;
            return;
        }
    }
    ctx->pc = 0x2310F0u;
label_2310f0:
    // 0x2310f0: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x2310f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_2310f4:
    // 0x2310f4: 0x2442a9a0  addiu       $v0, $v0, -0x5660
    ctx->pc = 0x2310f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945184));
label_2310f8:
    // 0x2310f8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2310f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2310fc:
    // 0x2310fc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2310fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_231100:
    // 0x231100: 0x800008  jr          $a0
label_231104:
    if (ctx->pc == 0x231104u) {
        ctx->pc = 0x231108u;
        goto label_231108;
    }
    ctx->pc = 0x231100u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2311F4u: goto label_2311f4;
            case 0x231200u: goto label_231200;
            case 0x23120Cu: goto label_23120c;
            case 0x231230u: goto label_231230;
            case 0x23123Cu: goto label_23123c;
            case 0x231248u: goto label_231248;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x231100u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x231108u;
label_231108:
    // 0x231108: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x231108u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_23110c:
    // 0x23110c: 0x8c42413c  lw          $v0, 0x413C($v0)
    ctx->pc = 0x23110cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16700)));
label_231110:
    // 0x231110: 0x1000005f  b           . + 4 + (0x5F << 2)
label_231114:
    if (ctx->pc == 0x231114u) {
        ctx->pc = 0x231114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231110u;
        // 0x231114: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231118u;
        goto label_231118;
    }
    ctx->pc = 0x231110u;
    {
        const bool branch_taken_0x231110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231110u;
        // 0x231114: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231110) {
            ctx->pc = 0x231290u;
            return;
        }
    }
    ctx->pc = 0x231118u;
label_231118:
    // 0x231118: 0xdf8284a0  ld          $v0, -0x7B60($gp)
    ctx->pc = 0x231118u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294935712)));
label_23111c:
    // 0x23111c: 0x216f8  dsll        $v0, $v0, 27
    ctx->pc = 0x23111cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 27);
label_231120:
    // 0x231120: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x231120u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_231124:
    // 0x231124: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x231124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_231128:
    // 0x231128: 0x10000059  b           . + 4 + (0x59 << 2)
label_23112c:
    if (ctx->pc == 0x23112Cu) {
        ctx->pc = 0x23112Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231128u;
        // 0x23112c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231130u;
        goto label_231130;
    }
    ctx->pc = 0x231128u;
    {
        const bool branch_taken_0x231128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23112Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231128u;
        // 0x23112c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231128) {
            ctx->pc = 0x231290u;
            return;
        }
    }
    ctx->pc = 0x231130u;
label_231130:
    // 0x231130: 0xdf838478  ld          $v1, -0x7B88($gp)
    ctx->pc = 0x231130u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294935672)));
label_231134:
    // 0x231134: 0x3405ff00  ori         $a1, $zero, 0xFF00
    ctx->pc = 0x231134u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
label_231138:
    // 0x231138: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x231138u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
label_23113c:
    // 0x23113c: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x23113cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_231140:
    // 0x231140: 0x3243a  dsrl        $a0, $v1, 16
    ctx->pc = 0x231140u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) >> 16);
label_231144:
    // 0x231144: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x231144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_231148:
    // 0x231148: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x231148u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
label_23114c:
    // 0x23114c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x23114cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_231150:
    // 0x231150: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x231150u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_231154:
    // 0x231154: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x231154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_231158:
    // 0x231158: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x231158u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_23115c:
    // 0x23115c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x23115cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_231160:
    // 0x231160: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x231160u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_231164:
    // 0x231164: 0x1000004a  b           . + 4 + (0x4A << 2)
label_231168:
    if (ctx->pc == 0x231168u) {
        ctx->pc = 0x231168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231164u;
        // 0x231168: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23116Cu;
        goto label_23116c;
    }
    ctx->pc = 0x231164u;
    {
        const bool branch_taken_0x231164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231164u;
        // 0x231168: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231164) {
            ctx->pc = 0x231290u;
            return;
        }
    }
    ctx->pc = 0x23116Cu;
label_23116c:
    // 0x23116c: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x23116cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
label_231170:
    // 0x231170: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x231170u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_231174:
    // 0x231174: 0x8c634168  lw          $v1, 0x4168($v1)
    ctx->pc = 0x231174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16744)));
label_231178:
    // 0x231178: 0x24423cd0  addiu       $v0, $v0, 0x3CD0
    ctx->pc = 0x231178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15568));
label_23117c:
    // 0x23117c: 0x1062001d  beq         $v1, $v0, . + 4 + (0x1D << 2)
label_231180:
    if (ctx->pc == 0x231180u) {
        ctx->pc = 0x231180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23117Cu;
        // 0x231180: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231184u;
        goto label_231184;
    }
    ctx->pc = 0x23117Cu;
    {
        const bool branch_taken_0x23117c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x231180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23117Cu;
        // 0x231180: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23117c) {
            ctx->pc = 0x2311F4u;
            goto label_2311f4;
        }
    }
    ctx->pc = 0x231184u;
label_231184:
    // 0x231184: 0x24423db0  addiu       $v0, $v0, 0x3DB0
    ctx->pc = 0x231184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15792));
label_231188:
    // 0x231188: 0x10620020  beq         $v1, $v0, . + 4 + (0x20 << 2)
label_23118c:
    if (ctx->pc == 0x23118Cu) {
        ctx->pc = 0x23118Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231188u;
        // 0x23118c: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231190u;
        goto label_231190;
    }
    ctx->pc = 0x231188u;
    {
        const bool branch_taken_0x231188 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23118Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231188u;
        // 0x23118c: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231188) {
            ctx->pc = 0x23120Cu;
            goto label_23120c;
        }
    }
    ctx->pc = 0x231190u;
label_231190:
    // 0x231190: 0x24423e90  addiu       $v0, $v0, 0x3E90
    ctx->pc = 0x231190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16016));
label_231194:
    // 0x231194: 0x10620024  beq         $v1, $v0, . + 4 + (0x24 << 2)
label_231198:
    if (ctx->pc == 0x231198u) {
        ctx->pc = 0x231198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231194u;
        // 0x231198: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23119Cu;
        goto label_23119c;
    }
    ctx->pc = 0x231194u;
    {
        const bool branch_taken_0x231194 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x231198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231194u;
        // 0x231198: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231194) {
            ctx->pc = 0x231228u;
            goto label_231228;
        }
    }
    ctx->pc = 0x23119Cu;
label_23119c:
    // 0x23119c: 0x1000003c  b           . + 4 + (0x3C << 2)
label_2311a0:
    if (ctx->pc == 0x2311A0u) {
        ctx->pc = 0x2311A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23119Cu;
        // 0x2311a0: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2311A4u;
        goto label_2311a4;
    }
    ctx->pc = 0x23119Cu;
    {
        const bool branch_taken_0x23119c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2311A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23119Cu;
        // 0x2311a0: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23119c) {
            ctx->pc = 0x231290u;
            return;
        }
    }
    ctx->pc = 0x2311A4u;
label_2311a4:
    // 0x2311a4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2311a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_2311a8:
    // 0x2311a8: 0x8c424140  lw          $v0, 0x4140($v0)
    ctx->pc = 0x2311a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16704)));
label_2311ac:
    // 0x2311ac: 0x10000038  b           . + 4 + (0x38 << 2)
label_2311b0:
    if (ctx->pc == 0x2311B0u) {
        ctx->pc = 0x2311B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2311ACu;
        // 0x2311b0: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2311B4u;
        goto label_2311b4;
    }
    ctx->pc = 0x2311ACu;
    {
        const bool branch_taken_0x2311ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2311B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2311ACu;
        // 0x2311b0: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2311ac) {
            ctx->pc = 0x231290u;
            return;
        }
    }
    ctx->pc = 0x2311B4u;
label_2311b4:
    // 0x2311b4: 0xdf838460  ld          $v1, -0x7BA0($gp)
    ctx->pc = 0x2311b4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294935648)));
label_2311b8:
    // 0x2311b8: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x2311b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_2311bc:
    // 0x2311bc: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_2311c0:
    if (ctx->pc == 0x2311C0u) {
        ctx->pc = 0x2311C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2311BCu;
        // 0x2311c0: 0x3063300e  andi        $v1, $v1, 0x300E (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)12302);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2311C4u;
        goto label_2311c4;
    }
    ctx->pc = 0x2311BCu;
    {
        const bool branch_taken_0x2311bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2311C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2311BCu;
        // 0x2311c0: 0x3063300e  andi        $v1, $v1, 0x300E (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)12302);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2311bc) {
            ctx->pc = 0x231200u;
            goto label_231200;
        }
    }
    ctx->pc = 0x2311C4u;
label_2311c4:
    // 0x2311c4: 0x2c62000e  sltiu       $v0, $v1, 0xE
    ctx->pc = 0x2311c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)14) ? 1 : 0);
label_2311c8:
    // 0x2311c8: 0x50400031  beql        $v0, $zero, . + 4 + (0x31 << 2)
label_2311cc:
    if (ctx->pc == 0x2311CCu) {
        ctx->pc = 0x2311CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2311C8u;
        // 0x2311cc: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2311D0u;
        goto label_2311d0;
    }
    ctx->pc = 0x2311C8u;
    {
        const bool branch_taken_0x2311c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2311c8) {
            ctx->pc = 0x2311CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2311C8u;
            // 0x2311cc: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x231290u;
            return;
        }
    }
    ctx->pc = 0x2311D0u;
label_2311d0:
    // 0x2311d0: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x2311d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
label_2311d4:
    // 0x2311d4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2311d4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_2311d8:
    // 0x2311d8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x2311d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_2311dc:
    // 0x2311dc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2311dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2311e0:
    // 0x2311e0: 0x2463a9c0  addiu       $v1, $v1, -0x5640
    ctx->pc = 0x2311e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945216));
label_2311e4:
    // 0x2311e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2311e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2311e8:
    // 0x2311e8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2311e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2311ec:
    // 0x2311ec: 0x800008  jr          $a0
label_2311f0:
    if (ctx->pc == 0x2311F0u) {
        ctx->pc = 0x2311F4u;
        goto label_2311f4;
    }
    ctx->pc = 0x2311ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2311ECu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2311F4u;
label_2311f4:
    // 0x2311f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2311f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2311f8:
    // 0x2311f8: 0x10000025  b           . + 4 + (0x25 << 2)
label_2311fc:
    if (ctx->pc == 0x2311FCu) {
        ctx->pc = 0x2311FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2311F8u;
        // 0x2311fc: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231200u;
        goto label_231200;
    }
    ctx->pc = 0x2311F8u;
    {
        const bool branch_taken_0x2311f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2311FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2311F8u;
        // 0x2311fc: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2311f8) {
            ctx->pc = 0x231290u;
            return;
        }
    }
    ctx->pc = 0x231200u;
label_231200:
    // 0x231200: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x231200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_231204:
    // 0x231204: 0x10000022  b           . + 4 + (0x22 << 2)
label_231208:
    if (ctx->pc == 0x231208u) {
        ctx->pc = 0x231208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231204u;
        // 0x231208: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23120Cu;
        goto label_23120c;
    }
    ctx->pc = 0x231204u;
    {
        const bool branch_taken_0x231204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231204u;
        // 0x231208: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231204) {
            ctx->pc = 0x231290u;
            return;
        }
    }
    ctx->pc = 0x23120Cu;
label_23120c:
    // 0x23120c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x23120cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_231210:
    // 0x231210: 0x1000001f  b           . + 4 + (0x1F << 2)
label_231214:
    if (ctx->pc == 0x231214u) {
        ctx->pc = 0x231214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231210u;
        // 0x231214: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231218u;
        goto label_231218;
    }
    ctx->pc = 0x231210u;
    {
        const bool branch_taken_0x231210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231210u;
        // 0x231214: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231210) {
            ctx->pc = 0x231290u;
            return;
        }
    }
    ctx->pc = 0x231218u;
label_231218:
    // 0x231218: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x231218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_23121c:
    // 0x23121c: 0x1000001c  b           . + 4 + (0x1C << 2)
label_231220:
    if (ctx->pc == 0x231220u) {
        ctx->pc = 0x231220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23121Cu;
        // 0x231220: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231224u;
        goto label_231224;
    }
    ctx->pc = 0x23121Cu;
    {
        const bool branch_taken_0x23121c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23121Cu;
        // 0x231220: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23121c) {
            ctx->pc = 0x231290u;
            return;
        }
    }
    ctx->pc = 0x231224u;
label_231224:
    // 0x231224: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x231224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_231228:
    // 0x231228: 0x10000019  b           . + 4 + (0x19 << 2)
label_23122c:
    if (ctx->pc == 0x23122Cu) {
        ctx->pc = 0x23122Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231228u;
        // 0x23122c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231230u;
        goto label_231230;
    }
    ctx->pc = 0x231228u;
    {
        const bool branch_taken_0x231228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23122Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231228u;
        // 0x23122c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231228) {
            ctx->pc = 0x231290u;
            return;
        }
    }
    ctx->pc = 0x231230u;
label_231230:
    // 0x231230: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x231230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_231234:
    // 0x231234: 0x10000016  b           . + 4 + (0x16 << 2)
label_231238:
    if (ctx->pc == 0x231238u) {
        ctx->pc = 0x231238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231234u;
        // 0x231238: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23123Cu;
        goto label_23123c;
    }
    ctx->pc = 0x231234u;
    {
        const bool branch_taken_0x231234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231234u;
        // 0x231238: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231234) {
            ctx->pc = 0x231290u;
            return;
        }
    }
    ctx->pc = 0x23123Cu;
label_23123c:
    // 0x23123c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x23123cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_231240:
    // 0x231240: 0x10000013  b           . + 4 + (0x13 << 2)
label_231244:
    if (ctx->pc == 0x231244u) {
        ctx->pc = 0x231244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231240u;
        // 0x231244: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231248u;
        goto label_231248;
    }
    ctx->pc = 0x231240u;
    {
        const bool branch_taken_0x231240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231240u;
        // 0x231244: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231240) {
            ctx->pc = 0x231290u;
            return;
        }
    }
    ctx->pc = 0x231248u;
label_231248:
    // 0x231248: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x231248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_23124c:
    // 0x23124c: 0x10000010  b           . + 4 + (0x10 << 2)
label_231250:
    if (ctx->pc == 0x231250u) {
        ctx->pc = 0x231250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23124Cu;
        // 0x231250: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231254u;
        goto label_231254;
    }
    ctx->pc = 0x23124Cu;
    {
        const bool branch_taken_0x23124c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23124Cu;
        // 0x231250: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23124c) {
            ctx->pc = 0x231290u;
            return;
        }
    }
    ctx->pc = 0x231254u;
label_231254:
    // 0x231254: 0xdf848460  ld          $a0, -0x7BA0($gp)
    ctx->pc = 0x231254u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 28), 4294935648)));
label_231258:
    // 0x231258: 0x30840ff0  andi        $a0, $a0, 0xFF0
    ctx->pc = 0x231258u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4080);
label_23125c:
    // 0x23125c: 0xc07dad0  jal         func_1F6B40
label_231260:
    if (ctx->pc == 0x231260u) {
        ctx->pc = 0x231260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23125Cu;
        // 0x231260: 0x4213a  dsrl        $a0, $a0, 4 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> 4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x231264u;
        goto label_231264;
    }
    ctx->pc = 0x23125Cu;
    SET_GPR_U32(ctx, 31, 0x231264u);
    ctx->pc = 0x231260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23125Cu;
    // 0x231260: 0x4213a  dsrl        $a0, $a0, 4 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> 4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F6B40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F6B40u, 0x23125Cu, 0x231264u)) {
        return;
    }
    ctx->pc = 0x231264u;
label_231264:
    // 0x231264: 0x3c013fff  lui         $at, 0x3FFF
    ctx->pc = 0x231264u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16383 << 16));
label_231268:
    // 0x231268: 0x34210007  ori         $at, $at, 0x7
    ctx->pc = 0x231268u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)7);
label_23126c:
    // 0x23126c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x23126cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_231270:
    // 0x231270: 0x0  nop
    ctx->pc = 0x231270u;
    // NOP
label_231274:
    // 0x231274: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x231274u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_231278:
    // 0x231278: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x231278u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_23127c:
    // 0x23127c: 0xe6010000  swc1        $f1, 0x0($s0)
    ctx->pc = 0x23127cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_231280:
    // 0x231280: 0x10000004  b           . + 4 + (0x4 << 2)
label_231284:
    if (ctx->pc == 0x231284u) {
        ctx->pc = 0x231284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231280u;
        // 0x231284: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x231288u;
        goto label_fallthrough_0x231280;
    }
    ctx->pc = 0x231280u;
    {
        const bool branch_taken_0x231280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231280u;
        // 0x231284: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231280) {
            ctx->pc = 0x231294u;
            return;
        }
    }
label_fallthrough_0x231280:
    ctx->pc = 0x231288u;
}
